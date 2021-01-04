#include "lists.h"

/**
 * listint_len - check the number of elements in a linked list
 * @h: Pointer to the head of the list
 * Return: On success, the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t idx;

	for (idx = 0; h != NULL; idx++)
	{
		h = h->next;
	}

	return (idx);
}
