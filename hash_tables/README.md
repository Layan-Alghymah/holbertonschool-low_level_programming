# C - Hash Tables

This project covers the implementation and use of hash tables in C.

## Learning Objectives

- Understand what a hash function is
- Understand what makes a good hash function
- Understand how hash tables work
- Handle hash collisions
- Understand the advantages and disadvantages of hash tables
- Learn common use cases of hash tables

## Data Structures

The project uses:

- `hash_node_t` for hash table nodes
- `hash_table_t` for the hash table structure

Collisions are handled using separate chaining with linked lists.

## Tasks

- `0-hash_table_create.c` - Creates a hash table
- `1-djb2.c` - Implements the djb2 hash function
- `2-key_index.c` - Returns the index of a key
- `3-hash_table_set.c` - Adds an element to the hash table
- `4-hash_table_get.c` - Retrieves a value using a key
- `5-hash_table_print.c` - Prints the hash table
- `6-hash_table_delete.c` - Deletes a hash table

## Compilation

Files are compiled on Ubuntu 20.04 LTS using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
