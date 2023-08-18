#include "lists.h"

/**
 * free_dlistint - it frees a dlistint_t list
 * @head: pointer to the first node of dlistint list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
  dlistint_t *cur_node = head;
  dlistint_t *next_node;

  while(cur_node != NULL)
    {
      next_node = cur_node->next;
      free(cur_node);
      cur_node = next_node;
    }
}
