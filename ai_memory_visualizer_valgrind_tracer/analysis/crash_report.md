# Crash Report

## Program

`crash_example.c`

## What happened?

The program crashes with a segmentation fault.

## Root Cause

`main()` calls:

```c
nums = allocate_numbers(n);
```

Since `n` is `0`, `allocate_numbers()` returns `NULL`:

```c
if (n <= 0)
    return NULL;
```

After that, the program executes:

```c
nums[0] = 42;
```

Because `nums` is `NULL`, this line tries to write through a null pointer, which causes the crash.

## Memory Type

- `nums` is a pointer stored on the **stack**.
- No heap memory is allocated because `malloc()` is never called when `n <= 0`.

## Causal Chain

```text
n = 0
↓
allocate_numbers() returns NULL
↓
nums = NULL
↓
nums[0] = 42
↓
Invalid memory write
↓
Segmentation fault
```

## AI Review

AI suggested using a positive value for `n`. This would avoid this specific crash, but it is not enough because memory allocation can still fail. The returned pointer should always be checked before it is used.
