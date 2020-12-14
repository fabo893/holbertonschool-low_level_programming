#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: point from which to free everything
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}

}
