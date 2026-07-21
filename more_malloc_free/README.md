# C - More malloc, free

This project is part of the Holberton School low level programming curriculum.

## Description

This project covers:
- Dynamic memory allocation.
- Using `malloc` and `free`.
- Using `exit`.
- Implementing custom versions of memory allocation functions.
- Understanding how `calloc` and `realloc` work.

## Learning Objectives

By completing this project, I learned:
- How to allocate memory dynamically.
- How to handle allocation failures.
- How to terminate a program using `exit`.
- How to implement functions similar to `calloc` and `realloc`.

## Files

| File | Description |
|------|-------------|
| `0-malloc_checked.c` | Allocates memory and exits with status 98 on failure. |
| `1-string_nconcat.c` | Concatenates two strings using a limited number of bytes. |
| `2-calloc.c` | Allocates memory for an array and initializes it to zero. |
| `3-array_range.c` | Creates an array of integers containing a range of values. |

## Compilation

All files are compiled using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o output
