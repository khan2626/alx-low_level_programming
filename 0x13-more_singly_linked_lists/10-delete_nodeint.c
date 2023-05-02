#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of listint_t
 * @head: the first node
 * @index: the index of the node to be deleted
 * Return: 1 if successful or -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;
	listint_t *new;

	temp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (i = 1; i < index; i++)
	{
		temp = temp->next;
	}
	new = temp->next;
	temp->next = new->next;
	free(new);

	return (1);
}

