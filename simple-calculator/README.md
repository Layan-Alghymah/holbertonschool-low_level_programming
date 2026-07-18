# Simple Calculator

A terminal-based calculator written in C. The program displays a menu, allows the user to perform basic arithmetic operations, and continues running until the user chooses to quit.

## Compilation

Compile the program using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
```

## Running the Program

After compilation, run:

```bash
./calculator
```

The calculator will display a menu of available operations. Enter the number corresponding to the desired operation and follow the prompts.

## Supported Operations

* Addition (`+`)
* Subtraction (`-`)
* Multiplication (`*`)
* Division (`/`)
* Quit (`0`)

Example menu:

```text
Simple Calculator
1) Add
2) Subtract
3) Multiply
4) Divide
0) Quit
```

## Numeric Behavior

This implementation uses the `int` data type for all operands and results.

* Addition, subtraction, and multiplication produce integer results.
* Division performs integer division.
* Any fractional part is discarded.

Examples:

* `7 / 2` produces `3`
* `10 / 5` produces `2`

## Known Limitations

* Only integer values are supported.
* Decimal numbers are not supported.
* Input validation is minimal.
* Division by zero should be handled explicitly by the program.
* The calculator supports only the four basic arithmetic operations.
