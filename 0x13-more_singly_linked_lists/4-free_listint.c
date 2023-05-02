#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * head: the head of listint_t list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *newnode;

	if (head == NULL)
		return;

	while (head != NULL)
	{
	newnode = head->next;
	free(head);
	head = newnode;
	}
}
