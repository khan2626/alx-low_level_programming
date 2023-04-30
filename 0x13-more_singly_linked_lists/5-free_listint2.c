#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: head of listint_t list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{

	current = *head;
	*head = (*head)->next;
	free(current);
	}

	*head = NULL;
}
