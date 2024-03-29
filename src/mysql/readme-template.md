# Benchmarking MySQL With Different Runtimes

## Results


All times are given in milliseconds. The 3 values in a table cell are: lexing⧸parsing⧸sum of both.

This table contains the results of a cold run of each runtime. Although all files are parsed in the same loop, a cold run is achieved by resetting both the lexer and the parser DFA for each file.

|❄️|statements.txt|bitrix\_queries\_cut.sql|sakila-data.sql|Total|
|:---:|---:|---:|---:|---:|---:|
⫸cold table⫷

This table contains the results of a warm run of each runtime. For this each parse run is executed 5 times (except for the WASM target, which has no stable memory houshold and crashes Node.js with more than 2 runs). The two slowest runs are then removed (except for the WASM runtime) and an average calculated for the rest.

|🔥|statements.txt|bitrix\_queries\_cut.sql|sakila-data.sql|Total|
|:---:|---:|---:|---:|---:|---:|
⫸warm table⫷

Both tables are sorted by the total execution time, with the fastest at the top.

### Notes on the Benchmarks

The numbers were taken on a Mac Studio M1 Max (32GB RAM, 512GB SSD, Sonoma 14.3). There's currently no way to separate out the lexer execution time for the `antl4` TypeScript target. For this reason, the tables only list the total times for this target. Additionally, this runtime has a slight advantage in that it is not possible to clear the DFA.

The runtime versions used for the benchmarks are:

    antlr4-cpp: 4.13.1
    antlr4: 4.13.1-patch-1
    antlr4ng: 3.0.4
    antlr4ts: 0.5.0-alpha.4
    antlr4wasm: unreleased code (C++ based on 4.13)

All benchmarks use the same [Oracle MySQL grammar](https://github.com/mysql/mysql-shell-plugins/tree/master/gui/frontend/src/parsing/mysql) and the same data files, which are:

- The query collection file (`statements.txt`), which contains more than 900 MySQL queries of all kinds, from very simple comment only statements, to complex stored procedures, including some deeply nested select queries that can easily exhaust the available stack space. The minimum MySQL server version used was 8.4.0.

- A smaller collection of SQL queries taken from a different MySQL grammar (`bitrix_queries_cut.sql`). This example file is a copy of the largest test file in [this repository](https://github.com/antlr/grammars-v4/tree/master/sql/mysql/Positive-Technologies/examples), and is known to be very slow to parse with other MySQL grammars. The one used here, however, is fast.

- The large binary inserts file (`sakila-data.sql`) contains only a few dozen queries, but they are really large with deep recursions, stressing so the prediction engine of the parser. Additionally, one query contains binary (image) data which contains input characters from the whole UTF-8 range.

## Running the Benchmarks

### Installing Dependencies

You first have to install all dependencies needed for building and running the benchmarks.

- C++ Runtime: you need `clang` installed on your box. Use your package manager or similar to install that if necessary.
- JS and TS runtimes: you need `Node.js` installed on your box (download it from https://nodejs.org). Then run `npm i` in the root of the project, which will install the antlr4, antlr4ts and antlr4ng packages.
- C++ WASM Runtime: this is the most complex one to set up. Follow the [Getting Started](https://emscripten.org/docs/getting_started/downloads.html) description on how to install emscripten.

> Note: it is **not** necessary to install all dependencies, if you are only interested in a particular runtime. Each benchmark comes with an own build script (where necessary) and a run script.

### Building

The next step is to generate the benchmark parsers. Each runtime has an own copy of the grammars and uses an individual lexer/parser pair, because the MySQL grammar contains target specific code and the imports in the generated files differ for each runtime. Run

```bash
npm run generate-benchmark-parsers
```

which will run a script that does the actual work.

> Note: there's no Windows batch file yet.

Unfortunately, there's a manual step you need to make for the WASM runtime: the import paths in MySQLLexer.ts and MySQLParser.ts are generated wrongly. Change:

```typescript
from "../../../../src/antlr4-runtime.js"
```

to

```typescript
from "./antlr4-runtime.js"
```

in both files. It's not worth repairing in the code generator, given that the WASM runtime is likely never chosen as a real target.

Then build the C++ benchmark app, by executing:

```bash
npm run build-cpp
```

and finally the WebAssembly:

```bash
npm run build-wasm-release
```

> Note: The antlr4wasm runtime needs its own copy of the C++ runtime files, because there are a number of changes required without which the WASM binary couldn't be built.

Once all this has succeeded you are ready to run the benchmarks.

### Benchmarks Execution

There are two ways here to run the benchmarks:

1. Execute the main script, which not only collects all numbers, but also updates this readme file (by using the readme-template.md file and filling the values there).
2. By running the individual scripts for each target. 

To run the main script open a terminal with the folder where this readme is in. Then run

```bash
npm run run-all-benchmarks
```

You will see progress messages for each target, but no actual numbers, as they are captured and collected to generate the result tables from them.

Once the script is done you can check this readme for the last taken numbers. You might encounter a Node.js crash for the antlr4wasm runtime, which is pretty common. When that happens nothing is updated

To run a benchmark for one runtime only, use its associated NPM script. They follow the pattern `run-xyz-benchmark` where `xyz` is either `antlr4ng`, `antlr4`, `antlr4ts` or `antlr4wasm`, respectively. For example, to run the `antlr4ng` benchmark execute:

```bash
npm run run-antlr4ng-benchmark
```

This will print a number of easy to parse results:

```text
begin benchmark: antlr4ng
    statements.txt: 202 ms, 2170 ms
    bitrix_queries_cut.sql: 91 ms, 486 ms
    sakila-data.sql: 6333 ms, 2134 ms
    statements.txt: 169 ms, 2055 ms
    bitrix_queries_cut.sql: 107 ms, 378 ms
    sakila-data.sql: 6326 ms, 2060 ms
    statements.txt: 339 ms, 368 ms
    bitrix_queries_cut.sql: 246 ms, 320 ms
    sakila-data.sql: 6239 ms, 2020 ms
    statements.txt: 418 ms, 448 ms
    bitrix_queries_cut.sql: 192 ms, 284 ms
    sakila-data.sql: 6281 ms, 1984 ms
    statements.txt: 404 ms, 489 ms
    bitrix_queries_cut.sql: 276 ms, 357 ms
    sakila-data.sql: 6302 ms, 2018 ms
    statements.txt: 419 ms, 424 ms
    bitrix_queries_cut.sql: 281 ms, 368 ms
    sakila-data.sql: 6295 ms, 2046 ms
end benchmark: antlr4ng
```

Alternatively, you can open the project in VS Code, open the NPM Scripts sidebar section and click the play button for each entry.
