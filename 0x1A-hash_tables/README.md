# Hash Table

## Overview

- This project implements a hash table data structure in C, provingfunctionalities such as adding, retrieving and deleting key-value pairs. 
- The implementation follows specified requirements and guidelines.

## Project Structure
- The project consists of the following files and directories:
	1. 'hash_table.h': Header file containing data structure definitions and functions prototypes.
	2. 'hash_table.c': Implementation of hash table functions.
	3. 'main.c': Example usage of the hash table.
## Compilation

- The code can be compiled on Ubuntu 20.04 LTS using 'gcc'.

## Usage 

- To use the hash table functionality, you can integrate the 'hash_tables.h' header file into your project and implement the necessary functions. Make sure to follow the provided data structures and adhere to the coding style guidelines.
- Example of how to create, set, get, print and delete a hash table:

#include "hash_tables.h"

int main(void)
{
    unsigned long int size = 1024; /* Choose an appropriate size */
    hash_table_t *ht = hash_table_create(size);

    /* Add key-value pairs */
    hash_table_set(ht, "key1", "value1");
    hash_table_set(ht, "key2", "value2");

    /* Retrieve values */
    char *result1 = hash_table_get(ht, "key1");
    char *result2 = hash_table_get(ht, "key2");

    /* Print the hash table */
    hash_table_print(ht);

    /* Delete the hash table */
    hash_table_delete(ht);

    return 0;
}
