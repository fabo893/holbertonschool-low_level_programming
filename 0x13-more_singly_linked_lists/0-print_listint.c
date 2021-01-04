#include "lists.h"

/**
 * print_listint - print all the elements of the list.
 * @h: Pointer to the head.
 * Return: On success, the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t idx;

	for (idx = 0; h != NULL; idx++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}

	return (idx);
}
