#include "hash_tables.h"
#include <stddef.h>

/**
 * key_index - it gives an index of key
 * @key: the key
 * @size: size of the array
 * Return: index of key/value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
  return (hash_djb2(key) % size);
}
