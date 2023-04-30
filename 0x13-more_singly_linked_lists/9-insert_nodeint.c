#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * head: the first node
 * @idx: the index of the list where the new node will be inserted
 * @n: data to insert in the new node
 * Return: NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp;

	if (*head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	new->n = n;
	temp = *head;

	for (i = 1; temp && i < idx; i++)
		temp = temp->next;
	new->next = temp->next;
	temp->next = new;

	return (new);
}
