# Valgrind Analysis

## aliasing_example.c

Command used:

```bash
valgrind --leak-check=full --show-leak-kinds=all ./programs/aliasing_example

Valgrind reports invalid reads and writes after free(a).

a and b point to the same heap array because of:

b = a;

After free(a), the array is no longer valid.
So reading b[2] is a use-after-free read, and writing to b[3] is a use-after-free write.

heap_example.c

Command used:

valgrind --leak-check=full --show-leak-kinds=all ./programs/heap_example

Each Person uses two heap allocations:

one allocation for the structure
one allocation for the name

Bob is freed correctly:

free(bob->name);
free(bob);

Alice is not completely freed. person_free_partial(alice) frees the structure only, but does not free alice->name.

After freeing the structure, the pointer to the name is lost, so Valgrind reports a definite memory leak.

AI Review

AI may say that freeing the Person also frees its name. This is incorrect because the structure and the name are separate heap allocations.


---

## `crash_report.md`

```markdown
# Crash Report

## Description

The program crashes after calling `allocate_numbers(0)`.

## Root Cause

Inside `allocate_numbers()`:

```c
if (n <= 0)
    return NULL;

Because n is 0, the function returns NULL.

Then the program executes:

nums[0] = 42;

nums is NULL, so this line tries to write through a null pointer.

Causal Chain
n = 0
-> allocate_numbers returns NULL
-> nums becomes NULL
-> nums[0] dereferences NULL
-> invalid write
-> segmentation fault

This is undefined behavior caused by a null pointer dereference.

AI Review

AI may suggest changing n to a positive number. This may avoid the crash in this example, but it is not a complete fix because malloc() can still fail. The returned pointer should always be checked before use.
