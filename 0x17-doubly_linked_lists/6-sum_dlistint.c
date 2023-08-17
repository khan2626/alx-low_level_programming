#include "lists.h"

/**
 * sum_dlistint - it sum all data of a dlistint_t list
 * @head: a pointer to the first node
 * Return: sum of all data or, 0 if unsuccessful
 */
int sum_dlistint(dlistint_t *head)
{
  dlistint_t *temp = head;
  int sum = 0;

  if (head == NULL)
    return (0);
  while (temp != NULL)
    {
      sum += temp->n;
      temp = temp->next;
    }
  return (sum);
}
