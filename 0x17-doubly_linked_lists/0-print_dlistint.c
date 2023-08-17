#include "lists.h"

/**
 * print_dlistint - it prints all element of a dlistint_t list
 * @h: a head pointer to the first node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
  size_t count = 0;
  const dlistint_t *temp = h;

  if (temp == NULL)
    return (count);
  while (temp->prev != NULL)
    temp = temp->prev;
  while (temp != NULL)
    {
      printf("%d\n", temp->n);
      temp = temp->next;
      count++;
    }
  return (count);
}
      
