#include "lists.h"
/**
 * get_nodeint_at_index - print node of index.
 * @head: pointer of list.
 * @index: number of index.
 * Return: On success, the nth node of a linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int idx;

	if (head == NULL)
		return (NULL);

	for (idx = 0; idx != index; idx++)
	{
		if (tmp == '\0')
			return (NULL);

		tmp = tmp->next;
	}
	return (tmp);
}
