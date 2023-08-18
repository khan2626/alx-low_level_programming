#include "lists.h"

/**
 * dlistint_len - it returns number of element in a linked list
 * @h: a pointer to head node
 * Return: number of element in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
  size_t count = 0;

  if (h == NULL)
    return (count);
  while (h != NULL)
    {
      h = h->next;
      count++;
    }
  return (count);
}
