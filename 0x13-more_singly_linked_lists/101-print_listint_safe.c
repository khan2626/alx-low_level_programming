#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts number of nodes in listint_t link
 * @head: the first node
 * Return:the number of unique nodes
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *f, *s;
	size_t new = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	s = head->next;
	f = (head->next)->next;

	while (f != NULL)
	{
	if (s == f)
	{
		f = head;
	while (s != f)
	{
	new++;
	s = s->next;
	f = f->next;
	}

	s = s->next;
	while (s != f)
	{
		new++;
		s = s->next;
	}

	return (new);
	}
	s = s->next;
	f = (f->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - prints a listint_t list safely
 * @head: the first node in listint_t list
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t new, i = 0;

	new = looped_listint_len(head);

	if (new == 0)
	{
	for (i = 0; head != NULL; new++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	}
	else
	{
	for (i = 0; i < new; i++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (new);
}


