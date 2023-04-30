#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n) of listint_t linked list.
 * @head: the first node
 * Return: sum of all the data n
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	if (head == NULL)
		return (0);

	while (temp->next != NULL)
	{
		temp = temp->next;
		sum = sum + temp->n;
	}
	return (sum);
}
