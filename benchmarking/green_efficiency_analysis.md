# Green Efficiency Analysis

## Measurement Methodology

The experiments were conducted using the provided C programs without modifying their algorithmic logic. All programs were compiled using the required compiler flags:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long
```

Execution time was measured using the `clock()` function from the C standard library. The elapsed processor time was calculated by taking the difference between two `clock()` values and dividing by `CLOCKS_PER_SEC`.

For the baseline benchmark, the program was executed three consecutive times and the execution times were recorded. For the algorithm comparison experiment, the program was also executed three times to reduce the effect of small timing variations. The average execution time for each implementation was then calculated. In the instrumentation experiment, separate timing measurements were added around the dataset construction, processing, and checksum reduction phases, together with an overall execution time for the complete program.

## Observed Performance Differences

The comparison experiment showed a very large difference between the two implementations. The naive algorithm required approximately **2.649326 seconds** on average, while the single-pass implementation required approximately **0.000103 seconds**. Based on these measurements, the naive implementation was approximately **25,804 times slower** than the single-pass implementation.

This result is consistent with the algorithms themselves. The naive implementation repeatedly scans portions of the dataset using nested loops, resulting in approximately quadratic time complexity, O(n²). In contrast, the single-pass implementation traverses the dataset only once, resulting in linear time complexity, O(n).

The instrumentation experiment also demonstrated that different phases of a program contribute differently to the total execution time. Measuring each phase separately made it possible to identify where the processor spent most of its execution time while confirming that the total measured time was greater than or equal to each individual phase.

## Relation Between Runtime and Energy Consumption

This project used execution time as an indirect indicator of energy efficiency rather than measuring electrical power directly. In general, when a program finishes its work more quickly, the processor remains active for a shorter period, which can reduce overall energy consumption.

The large runtime difference observed between the naive and single-pass implementations suggests that the more efficient algorithm would also consume less energy under similar hardware conditions. This illustrates how algorithmic efficiency can improve both application performance and resource utilization.

## Limitations of the Experiment

Several limitations should be considered when interpreting these results. First, the experiment measured processor time using `clock()` instead of actual electrical power consumption. Therefore, energy usage was inferred rather than directly measured.

Second, execution times may vary slightly because of operating system scheduling, background processes, and hardware conditions. Finally, the experiments were performed using a fixed dataset size on a single machine, so the results may differ on different hardware or with different input sizes.

## Practical Engineering Takeaway

This experiment demonstrates that selecting efficient algorithms has a much greater impact on performance than low-level code optimizations. Measuring execution time provides objective evidence that supports engineering decisions instead of relying on assumptions.

By combining algorithm analysis using Big O notation with practical benchmarking, developers can identify inefficient implementations, improve application performance, and potentially reduce energy consumption. Writing efficient software benefits users through faster execution while also making better use of computing resources.# Green Efficiency Analysis

## Measurement Methodology

The experiments were conducted using the provided C programs without modifying their algorithmic logic. All programs were compiled using the required compiler flags:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long
```

Execution time was measured using the `clock()` function from the C standard library. The elapsed processor time was calculated by taking the difference between two `clock()` values and dividing by `CLOCKS_PER_SEC`.

For the baseline benchmark, the program was executed three consecutive times and the execution times were recorded. For the algorithm comparison experiment, the program was also executed three times to reduce the effect of small timing variations. The average execution time for each implementation was then calculated. In the instrumentation experiment, separate timing measurements were added around the dataset construction, processing, and checksum reduction phases, together with an overall execution time for the complete program.

## Observed Performance Differences

The comparison experiment showed a very large difference between the two implementations. The naive algorithm required approximately **2.649326 seconds** on average, while the single-pass implementation required approximately **0.000103 seconds**. Based on these measurements, the naive implementation was approximately **25,804 times slower** than the single-pass implementation.

This result is consistent with the algorithms themselves. The naive implementation repeatedly scans portions of the dataset using nested loops, resulting in approximately quadratic time complexity, O(n²). In contrast, the single-pass implementation traverses the dataset only once, resulting in linear time complexity, O(n).

The instrumentation experiment also demonstrated that different phases of a program contribute differently to the total execution time. Measuring each phase separately made it possible to identify where the processor spent most of its execution time while confirming that the total measured time was greater than or equal to each individual phase.

## Relation Between Runtime and Energy Consumption

This project used execution time as an indirect indicator of energy efficiency rather than measuring electrical power directly. In general, when a program finishes its work more quickly, the processor remains active for a shorter period, which can reduce overall energy consumption.

The large runtime difference observed between the naive and single-pass implementations suggests that the more efficient algorithm would also consume less energy under similar hardware conditions. This illustrates how algorithmic efficiency can improve both application performance and resource utilization.

## Limitations of the Experiment

Several limitations should be considered when interpreting these results. First, the experiment measured processor time using `clock()` instead of actual electrical power consumption. Therefore, energy usage was inferred rather than directly measured.

Second, execution times may vary slightly because of operating system scheduling, background processes, and hardware conditions. Finally, the experiments were performed using a fixed dataset size on a single machine, so the results may differ on different hardware or with different input sizes.

## Practical Engineering Takeaway

This experiment demonstrates that selecting efficient algorithms has a much greater impact on performance than low-level code optimizations. Measuring execution time provides objective evidence that supports engineering decisions instead of relying on assumptions.

By combining algorithm analysis using Big O notation with practical benchmarking, developers can identify inefficient implementations, improve application performance, and potentially reduce energy consumption. Writing efficient software benefits users through faster execution while also making better use of computing resources.
