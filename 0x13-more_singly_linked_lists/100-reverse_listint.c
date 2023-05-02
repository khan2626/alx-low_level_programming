#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: the first node of the list
 * Return: a pointer the head of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *n = NULL;
	listint_t *p = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}
	*head = p;

	return (*head);
}
