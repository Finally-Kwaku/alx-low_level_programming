#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp = head;

	while (temp)
	{sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
