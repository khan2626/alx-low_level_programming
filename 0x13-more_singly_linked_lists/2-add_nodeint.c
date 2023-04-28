#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning
 * @head: head of the linked list
 * @n: the data to insert in the new node
 * Return: address of new node or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}

