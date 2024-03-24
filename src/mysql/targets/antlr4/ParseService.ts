/*
 * Copyright (c) Mike Lischke. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 */

/* eslint-disable no-underscore-dangle */

import {
    BailErrorStrategy, CharStreams, CommonTokenStream, PredictionMode,
} from "antlr4";

import { IParserErrorInfo, type IParseService } from "../misc/types.js";
import MySQLLexer from "./MySQLLexer.js";
import MySQLParser from "./MySQLParser.js";
import { SimpleErrorListener } from "./SimpleErrorListener.js";

export class ParseService implements IParseService {
    private errors: IParserErrorInfo[] = [];
    private errorListener: SimpleErrorListener;

    private text = "";
    private serverVersion = 0;
    private sqlMode = "";

    public constructor(private charSets: Set<string>) {
        this.errorListener = new SimpleErrorListener(this.errors);
    }

    public errorCheck(): boolean {
        this.startParsing(this.text, true, this.serverVersion, this.sqlMode);

        return this.errors.length === 0;
    }

    /**
     * Returns a collection of errors from the last parser run. The start position is offset by the given
     * value (used to adjust error position in a larger context).
     *
     * @param offset The character offset to add for each error.
     *
     * @returns The updated error list from the last parse run.
     */
    public errorsWithOffset(offset: number): IParserErrorInfo[] {
        const result: IParserErrorInfo[] = [...this.errors];
        result.forEach((error: IParserErrorInfo) => {
            error.charOffset += offset;
        });

        return result;
    }

    public tokenize(text: string, serverVersion: number, sqlMode: string): void {
        this.text = text;
        this.serverVersion = serverVersion;
        this.sqlMode = sqlMode;

        /*
        We cannot take separate lexing into account here, because we cannot reset the token stream and have
        to create everything from scratch for each run.

        const stream = CharStreams.fromString(text);
        const lexer = new MySQLLexer(stream);
        const tokenStream = new CommonTokenStream(lexer);
        lexer.serverVersion = serverVersion;
        lexer.sqlModeFromString(sqlMode);
        lexer.removeErrorListeners();
        lexer.addErrorListener(this.errorListener);

        tokenStream.fill();
        */
    }

    public clearDFA(): void {
        // Not supported in this runtime.
        //this.lexer._interp.clearDFA();
        //this.parser._interp.clearDFA();
    }

    private startParsing(text: string, fast: boolean, serverVersion: number, sqlMode: string): void {
        this.errors = [];

        // We have to create everything from scratch for each run, because we cannot reset the token stream
        // (which would be the better way to do it, like in the other runtimes).
        // This makes parsing slower than it could be.
        // Because of that we cannot exclude the lexing time from the parse run. However, that should not have a
        // big impact as we have a warm lexer DFA at this point (because of previous calls to `tokenize()`).
        const stream = CharStreams.fromString(text);
        const lexer = new MySQLLexer(stream);
        const tokenStream = new CommonTokenStream(lexer);
        const parser = new MySQLParser(tokenStream);
        lexer.removeErrorListeners();
        lexer.addErrorListener(this.errorListener);

        //this.parser.removeParseListeners();
        parser.removeErrorListeners();
        parser.addErrorListener(this.errorListener);

        lexer.charSets = this.charSets;

        parser.buildParseTrees = !fast;

        lexer.serverVersion = serverVersion;
        lexer.sqlModeFromString(sqlMode);
        parser.serverVersion = serverVersion;
        parser.sqlModes = lexer.sqlModes;

        // First parse with the bail error strategy to get quick feedback for correct queries.
        // Note: there's no need to delete the strategy instance. The error handler will take care.
        parser._errHandler = new BailErrorStrategy();
        parser._interp.predictionMode = PredictionMode.SLL;

        parser.query();
    }

}
