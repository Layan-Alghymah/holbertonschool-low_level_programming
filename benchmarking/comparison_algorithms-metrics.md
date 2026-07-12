# Algorithmic Efficiency Comparison

## Execution Results

### Run 1

Naive algorithm result: 625025000

Naive algorithm time: 2.650224 seconds

Single-pass algorithm result: 25000

Single-pass algorithm time: 0.000103 seconds

### Run 2

Naive algorithm result: 625025000

Naive algorithm time: 2.648664 seconds

Single-pass algorithm result: 25000

Single-pass algorithm time: 0.000102 seconds

### Run 3

Naive algorithm result: 625025000

Naive algorithm time: 2.649090 seconds

Single-pass algorithm result: 25000

Single-pass algorithm time: 0.000103 seconds

## Average Execution Times

Naive algorithm average: 2.649326

Single-pass average: 0.000102667 seconds

## Relative Difference

2.649326 / 0.000102667 =  25803.5

## Interpretation

The naive implementation uses nested loops, giving it approximately O(n²) time complexity. The single-pass implementation scans the array only once, giving it O(n) time complexity.

The benchmark shows that the single-pass implementation is approximately 25,804 times faster than the naive implementation. Lower execution time generally means the CPU remains active for less time, which may reduce energy consumption. However, this benchmark measures execution time rather than electrical power directly.
