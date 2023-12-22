#ifndef HASH_TABLES_H
#define HASH_TABLES_H

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

/**
 * hash_table_create - Createees a hash table
 * @size: The size of te array
 *
 * Return: A pointer to the newly created hash table, or NULL if something 
 * went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size);

/**
 * hash_djb2 - Hash function implementing the dj2 algorith
 * @str: The string to hash
 *
 * Return: The computed hash value
 */
unsigned long int hash_djb2(const unsigned char *str);

/**
 * key_index - gets the index of a key in the hash table's array
 * @key: The key to find the index for
 * @size: The size of the array
 *
 * Return: The index where the key should be storedd in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size);

/**
 * hash_table_set -  Adds or updates a key/value pair in the hash table
 * @ht: The hash table to add or update the key/value to
 * @key: The key. Cannot be an empty string.
 * @value: The value associated with the key. Must be duplicated.
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

/**
 * hash_table_get - Retrieves the value associated with a key in the hash table
 * @ht: The hash table to look into
 * @key: The key you are looking for
 *
 * Return: The value associated with the key, or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key);

/**
 * hash_table_print - Prints the contents of the hash table
 * @ht: The hash table to print
 */
void hash_table_print(const hash_table_t *ht);

/**
 * hash_table_delete - Deletes a hash table and its elements
 * @ht: The hash table to delete
 */
void hash_table_delete(hash_table_t *ht);

#endif /* HASH_TABLES_H */
