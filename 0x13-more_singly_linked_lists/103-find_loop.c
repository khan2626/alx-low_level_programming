#include "lists.h"

/**
 * find_listint_loop - finds loop in listint_t list
 * @head: the first node
 * Return: address where the loop starts or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *f = head;
	listint_t *s = head;

	if (head == NULL)
		return (NULL);
	
	while (s && f && f->next != NULL)
	{
		f = f->next->next;
		s = s->next;
	}
	if (f === s)
	{
		s = head;
	while (s != f)
	{
		s = s->next;
		f = f->next;
	}
	return (NULL);
	}
}
