#include "lists.h"

/**
 * add_dnodeint - it adds node at the beginning of the list
 * @head: pointer to the first node
 * @n: memory address of the added node
 * Return: n if successful, else NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t *new_node;

  new_node = (dlistint_t*)malloc(sizeof(dlistint_t));

  if (new_node == NULL)
    return (NULL);
  new_node->n = n;
  new_node->next = *head;

  if (*head != NULL)
    (*head)->prev = new_node;

  *head = new_node;
  return (new_node);
}
