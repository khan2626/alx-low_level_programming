#include "hash_tables.h"

/**
 * hash_table_print - it prints hash table
 * @ht: pointer to hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
  hash_node_t *node;
  unsigned long int i;
  unsigned char fl = 0;

  if (ht == NULL)
    return;

  printf("{");
  for (i = 0; i < ht->size; i++)
    {
      if (ht->array[i] != NULL)
	{
	  if (fl == 1)
	    printf(", ");

	  node = ht->array[i];
	  while (node != NULL)
	    {
	      printf("'%s': '%s'", node->key, node->value);
	      node = node->next;
	      if (node != NULL)
		printf(", ");
	    }
	  fl = 1;
	}
    }
  printf("}\n");
}
