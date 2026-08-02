# Valgrind Analysis

## aliasing_example.c

Command used:

```bash
valgrind --leak-check=full --show-leak-kinds=all ./programs/aliasing_example

Valgrind reports invalid reads and writes after free(a).

a and b point to the same heap array because of:

b = a;

After free(a), the array is no longer valid. Reading b[2] is a use-after-free read, and writing to b[3] is a use-after-free write.

heap_example.c

Command used:

valgrind --leak-check=full --show-leak-kinds=all ./programs/heap_example

Each Person uses two heap allocations:

one for the structure
one for the name

Bob is freed correctly:

free(bob->name);
free(bob);

Alice is not completely freed. person_free_partial(alice) frees the structure, but it does not free alice->name.

After the structure is freed, the pointer to the name is lost, so Valgrind reports a definite memory leak.

AI Review

AI may say that freeing the Person also frees its name. This is incorrect because the structure and the name are separate heap allocations.
