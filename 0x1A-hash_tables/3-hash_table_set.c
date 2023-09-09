#include "hash_tables.h"

/**
 * hash_table_set - it adds element to hash table
 * @key: the key
 * @ht: a A pointer to hash table
 * @value: the value associated with a key
 * Return: 1 on success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
  hash_node_t *new_entry;
  unsigned long int index, i;
  char *value_cp;

  if (ht == NULL || key == NULL || *key == '\0')
    return (0);

  value_cp = strdup(value);
  if (value_cp == NULL)
    return (0);

  index = key_index((const unsigned char *)key, ht->size);
  for (i = index; ht->array[i]; i++)
    {
      if (strcmp(ht->array[i]->key, key) == 0)
	{
	  free(ht->array[i]->value);
	  ht->array[i]->value = value_cp;
	  return (1);
	}
    }
  new_entry = malloc(sizeof(hash_node_t));
  if (new_entry == NULL)
    {
      free(value_cp);
      return (0);
    }
  new_entry->key = strdup(key);
  if (new_entry->key == NULL)
    {
      free(new_entry);
      return (0);
    }
  new_entry->value = value_cp;
  new_entry->next = ht->array[index];
  ht->array[index] = new_entry;

  return (1);
}
  
