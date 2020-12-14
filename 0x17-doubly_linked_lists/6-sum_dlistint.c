#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n).
 * @head: pointer to head of list
 *
 * Return: On success, th sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
