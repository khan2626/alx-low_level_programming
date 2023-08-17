#include "lists.h"

/**
 * delete_dnodeint_at_index - it deletes node at index
 * @head: pointer to the head of the linked list
 * @index: index node to be deleted
 * Return: 1 if succesful, else 0
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
  dlistint_t *temp = *head, *prev_node = NULL;
  unsigned int cur_idx = 0;

  if (*head == NULL)
    return (-1);
  while (temp != NULL && cur_idx < index)
    {
      prev_node = temp;
      temp = temp->next;
      cur_idx++;
    }
  if (temp == NULL)
    return (-1);
  if (prev_node == NULL)
    {
      *head = temp->next;
      if (*head != NULL)
	(*head)->prev = NULL;
    }
  else
    {
      prev_node->next = temp->next;
      if (temp->next != NULL)
	temp->next->prev = prev_node;
    }
  free(temp);
  return (1);
}
    
