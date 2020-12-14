#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node.
 * @head: head of the list
 * @index: index of the node
 *
 * Return: On success, nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (head)
	{
		if (idx == index)
			return (head);
		head = head->next;
		idx++;
	}

	return (NULL);
}
