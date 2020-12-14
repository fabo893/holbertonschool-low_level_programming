#include "lists.h"

/**
 * dlistint_len - returns the numbert of elements.
 * @h: head element of list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n;

	if (h == NULL)
		return (0);

	for (n = 0; h != NULL; n++)
	{
		h = h->next;
	}
	return (n);
}
