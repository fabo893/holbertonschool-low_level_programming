#include "lists.h"

/**
 * print_dlistint - prints all the elements
 * @h: head of the list
 * Return: the number of the nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);
	while (h != NULL)
	{
		if (!h->n)
			printf("0\n");
		else
			printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
