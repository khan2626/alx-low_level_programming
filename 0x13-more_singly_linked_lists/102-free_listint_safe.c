#include "lists.h"

/**
 * free_listint_safe - frees a listint_t with loop
 * @h: a pointer to the first node of listint_t list
 * Return: size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t size = 0;
	int difference;

	if (h == NULL || *h == NULL)
		return (0);

	while (*h != NULL)
	{
	difference = *h - (*h)->next;
	if (difference > 0)
	{
	temp = (*h)->next;
	free(*h);
	*h = temp;
	size++;
	}
	else
	{
	free(*h);
	*h = NULL;
	size++;
	break;
	}
	}
	*h = NULL;

	return (size);
}
