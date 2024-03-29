# Constant Folding Benchmarks

In the benchmarks here we use a simple grammar with 64 tokens, all as alts in a single parser rule.

## Results

All times are given in milliseconds. The 3 values in a table cell are: lexing⧸parsing⧸sum of both.

This table contains the results of a cold run of each runtime. Although all files are parsed in the same loop, a cold run is achieved by resetting both the lexer and the parser DFA for each file.

|❄️|input|Total|
|:---:|---:|---:|
⫸cold table⫷

This table contains the results of a warm run of each runtime. For this each parse run is executed 5 times. The two slowest runs are then removed and an average calculated for the rest.

|🔥|input|Total|
|:---:|---:|---:|
⫸warm table⫷

Both tables are sorted by the total execution time, with the fastest at the top.

### Notes on the Benchmarks

The numbers were taken on a Mac Studio M1 Max (32GB RAM, 512GB SSD, Sonoma 14.3). There's currently no way to separate out the lexer execution time for the `antl4` TypeScript target. For this reason, the tables only list the total times for this target. Additionally, this runtime has a slight advantage in that it is not possible to clear the DFA.

The runtime versions used for the benchmarks are:

    antlr4-cpp: 4.13.1
    antlr4: 4.13.1-patch-1
    antlr4ng: 3.0.4
    antlr4ts: 0.5.0-alpha.4

The test input is generated at runtime and consists of 10000 strings all with the same 64 tokens in a row, but in random order.

## Running the Benchmarks

### Installing Dependencies

You first have to install all dependencies needed for building and running the benchmarks.

- C++ Runtime: you need `clang` installed on your box. Use your package manager or similar to install that if necessary.
- JS and TS runtimes: you need `Node.js` installed on your box (download it from https://nodejs.org). Then run `npm i` in the root of the project, which will install the antlr4, antlr4ts and antlr4ng packages.

> Note: it is **not** necessary to install all dependencies, if you are only interested in a particular runtime. Each benchmark comes with an own build script (where necessary) and a run script.

### Building

The next step is to generate the benchmark parsers. Each runtime has an own copy of the grammars and uses an individual lexer/parser pair, because the MySQL grammar contains target specific code and the imports in the generated files differ for each runtime. Run

```bash
npm run generate-benchmark-parsers
```

which will run a script that does the actual work.

> Note: there's no Windows batch file yet.

Then build the C++ benchmark app, by executing:

```bash
npm run build-cpp
```

This app needs a static lib of the ANTLR4 runtime. Read the [main readme](../../readme.md) file for more details.

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

Once the script is done you can check this readme for the last taken numbers.

To run a benchmark for one runtime only, use its associated NPM script. They follow the pattern `run-xyz-benchmark` where `xyz` is either `antlr4ng`, `antlr4`, `antlr4ts` or `antlr4wasm`, respectively. For example, to run the `antlr4ng` benchmark execute:

```bash
npm run run-antlr4ng-benchmark
```

This will print a number of easy to parse results:

```text
begin benchmark: antlr4ng
    input: 230 ms, 56 ms
    input: 201 ms, 55 ms
    input: 202 ms, 50 ms
    input: 216 ms, 50 ms
    input: 194 ms, 51 ms
    input: 214 ms, 50 ms
end benchmark: antlr4ng
```

Alternatively, you can open the project in VS Code, open the NPM Scripts sidebar section and click the play button for each entry.
