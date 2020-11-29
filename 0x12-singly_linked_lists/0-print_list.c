#include "lists.h"
/**
 * list_len - determines the number of elements
 * in a linked list_t list
 * @h: head of list of node fron which to start counting
 * Return: count of linked elements
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
