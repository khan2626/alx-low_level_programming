#include "lists.h"

/**
 * pop_listint - deletes the head of listint_t lisit
 * head: the head of the listint_t list
 * Return: 0 if lis is empty, else the data in head
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int fig;

	if (head == NULL || *head == NULL)
	return (0);

	fig = (*head)->n;
	new = (*head)->next;
	free(*head);
	*head = new;

	return (fig);
}
