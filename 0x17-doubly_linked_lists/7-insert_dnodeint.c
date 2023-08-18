#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: pointer to the first node
 * @idx: index to insert the node
 * @n: data parameter
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
  dlistint_t *new_node, *temp = *h;
  unsigned int cur_idx = 0;

  new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

  if (*h == NULL)
    return (NULL);
  new_node->n = n;
  while (temp != NULL && cur_idx < idx - 1)
    {
      temp = temp->next;
      cur_idx++;
    }
  new_node->next = temp->next;
  if (temp->next != NULL)
    temp->next->prev = new_node;
  temp->next = new_node;
  new_node->prev = temp;

  return (new_node);
}
      
