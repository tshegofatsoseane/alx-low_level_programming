#include "hash_tables.h"

/**
 * key_index - A function to get the index.
 * @key: Index of key.
 * @size: Hash table array size.
 * Return: Results
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}
