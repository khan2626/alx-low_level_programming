#include "lists.h"

/**
 * get_dnodeint_at_index - it returns index node of dlistint_t list
 * @head: pointer to the first node
 * @index: index node
 * Return: index node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
  dlistint_t *temp = head;
  unsigned int cur_index = 0;

  if (head == NULL)
    return (NULL);
  while (temp != NULL && cur_index < index)
    {
      temp = temp->next;
      cur_index++;
    }
  if (cur_index == index)
    return (temp);
  return (NULL);
}
