#include "lists.h"

/**
 * add_dnodeint_end - it adds a node at the end of a list
 * @head: pointer to the first node
 * n: data parameter
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
  dlistint_t *new_node, *temp = *head;

  new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
  if (new_node == NULL)
    return (NULL);

  new_node->n = n;

  if (*head == NULL)
    *head = new_node;
  else
    {
      while (temp->next != NULL)
	temp = temp->next;
      temp->next = new_node;
      new_node->prev = temp;
    }

  return (new_node);
}
