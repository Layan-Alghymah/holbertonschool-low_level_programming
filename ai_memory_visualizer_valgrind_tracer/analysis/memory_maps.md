# Memory Maps

## stack_example.c

This program shows how recursive calls create separate stack frames.

### Inside `dump_frame("enter", 0)`

```text
STACK
----------------
dump_frame
- depth = 0
- local_int = 100
- local_buf[0] = 'A'
- p_local -> local_int

walk_stack
- depth = 0
- max_depth = 3
- marker = 0

main

HEAP
----------------
No heap allocations

local_int, local_buf, and p_local exist only while dump_frame() is running.
When the function returns, its stack frame is removed.

At maximum recursion depth, there are four walk_stack frames for depths 0, 1, 2, and 3. Each frame has its own marker.

AI review

The visualizer showed the string "enter" near the heap. This is misleading because string literals are stored in static read-only memory, not dynamically allocated heap memory.

aliasing_example.c

make_numbers(5) allocates one array on the heap.

STACK
----------------
a --------+
          +----> HEAP ARRAY [0, 11, 22, 33, 44]
b --------+

After b = a, both pointers refer to the same array.

After free(a), the array lifetime ends. Both a and b become dangling pointers.

Reading b[2] is a use-after-free read.
Writing b[3] is a use-after-free write.

AI review

An incomplete explanation may say only that b is invalid. More precisely, both a and b are invalid because they point to the same freed heap object.


## `valgrind_analysis.md`

```markdown
# Valgrind Analysis

## aliasing_example.c

Command used:

```bash
valgrind --leak-check=full --show-leak-kinds=all ./programs/aliasing_example

Valgrind reports invalid reads and writes after free(a).

a and b point to the same heap array. When free(a) is called, the array lifetime ends. Accessing b[2] and b[3] after that is use-after-free.

heap_example.c

Each person has two heap allocations:

one for the Person structure
one for the name string

Bob is freed correctly because both bob->name and bob are freed.

Alice is only partially freed. person_free_partial(alice) frees the structure but not alice->name. The pointer to the name is lost, so Valgrind reports a definite memory leak.

AI review

An AI explanation saying that freeing the Person also frees the name would be incorrect. They are separate heap allocations and must be freed separately.


## `crash_report.md`

```markdown
# Crash Report

The program crashes because `n` is 0.

`allocate_numbers(0)` returns `NULL` because of:

```c
if (n <= 0)
    return NULL;

Then main() executes:

nums[0] = 42;

Since nums is NULL, this is an invalid write through a null pointer.

Causal chain:

n = 0
-> allocate_numbers returns NULL
-> nums becomes NULL
-> nums[0] dereferences NULL
-> invalid write
-> segmentation fault

This is undefined behavior caused by a null pointer dereference.

AI review

Changing n to a positive number may avoid this crash, but it is not a complete fix because malloc() can still fail. The returned pointer must always be checked before use.
