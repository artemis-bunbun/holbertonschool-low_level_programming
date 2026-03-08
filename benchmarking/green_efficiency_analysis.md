# Green Efficiency Analysis: Loop and Algorithm Performance Comparison

## Measurement Methodology

This benchmarking exercise employed two controlled C programs to measure execution time as a proxy for energy consumption. The first program, `baseline_loop.c`, executes 100 million iterations of a simple arithmetic operation (computing `i % 3`), measuring the time cost of loop overhead and basic computation. The second program, `comparison_algorithms.c`, implements two distinct algorithms for counting even numbers in an array of 50,000 integers: a naive nested-loop O(n²) approach and an optimized single-pass O(n) approach.

Execution time was measured using the C standard library `clock()` function, normalized by `CLOCKS_PER_SEC` to convert clock ticks to seconds. Three runs of each benchmark were conducted to account for system variability and produce representative measurements. The baseline loop consistently required approximately 0.74 to 0.96 seconds across three trials, while the algorithm comparison focused on contrasting two fundamentally different approaches to the same problem.

## Observed Performance Differences

The baseline loop measurements showed variability across runs: 0.963714 seconds, 0.733016 seconds, and 0.738534 seconds. The fastest run was approximately 24% faster than the slowest, highlighting the importance of multiple measurements when benchmarking. The average execution time was approximately 0.81 seconds for the simple loop-and-arithmetic workload.

The algorithm comparison revealed dramatic differences between implementations. The naive O(n²) algorithm, which uses nested loops to redundantly iterate through previously-examined data, recorded execution times ranging from approximately 2.79 to 3.44 seconds across multiple runs. In contrast, the single-pass O(n) algorithm completed the same task (counting even numbers in the same dataset) in approximately 0.000033 to 0.000034 seconds—more than 80,000 times faster than the naive approach.

This performance gap demonstrates that algorithmic efficiency is not a theoretical concern: the nested-loop approach spent roughly 3.1 seconds on wasted computation, repeatedly scanning data that had already been processed, while the optimized version completed in microseconds.

## Relation Between Runtime and Energy Consumption

Runtime directly correlates with energy consumption at the CPU level. A longer-running program keeps processor cores active for extended periods, drawing power continuously until task completion. The relationship is approximately linear: a program requiring twice the execution time will consume approximately twice the electrical energy, assuming constant power draw.

In the algorithm comparison, the naive implementation consumed roughly 80,000 times more energy than the optimized version, assuming comparable power states. On a device with a typical CPU power draw of 5–15 watts under full load, the naive implementation would waste substantial energy—energy that translates to carbon emissions in global electricity grids. Over thousands of repeated invocations in production systems, such inefficiency compounds significantly.

The baseline loop measurements, while shorter than the algorithm comparison, still illustrate the principle: each nanosecond of execution represents electricity consumed. Variability in repeated measurements (0.73 to 0.96 seconds) suggests that system factors like cache behavior and CPU frequency scaling influence actual runtime, underscoring that efficiency engineering requires accounting for real-world conditions.

## Limitations of the Experiment

This benchmarking exercise has important constraints. First, it measures runtime only, not actual power consumption in watts. CPU power draw varies with frequency scaling, memory access patterns, and thermal conditions. A more complete energy analysis would require specialized hardware (power meters or CPU energy counters) beyond this scope. Runtime is a useful proxy but not a complete picture.

Second, the measurement environment was a single system. Different CPUs, compiler versions, and optimization flags would produce different absolute numbers. Comparisons are valid only under identical conditions. Third, these microbenchmarks isolate specific operations and may not generalize to real-world applications where cache behavior, memory allocation, and I/O dominate. Finally, the naive algorithm's performance penalty is artificial and extreme; many real-world performance differences are more subtle.

## Practical Engineering Takeaway

Algorithmic efficiency matters profoundly in practice. The choice between O(n²) and O(n) solutions—a fundamental concept in computer science—manifested as an 80,000× runtime difference in this measurement. Such gaps translate directly to user experience (faster response times) and environmental responsibility (reduced energy consumption).

Software engineers should prioritize algorithmic analysis during design. Before optimizing low-level details, ask: Is my algorithm efficient? A correct but inefficient algorithm will always lose to a well-designed one. Even in non-performance-critical contexts, inefficient code accumulates across billions of devices globally, multiplying its environmental footprint.

Measurement discipline is essential: take multiple runs, document conditions, and reason about what results mean. Avoid premature optimization, but do not ignore algorithmic fundamentals. The energy cost of software is real and growing; responsible engineering demands we measure, compare, and choose better algorithms whenever feasible.
