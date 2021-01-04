#include "lists.h"

/**
 * free_listint - free a list
 * @head: Pointer to head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t frees = head;

	for (; frees;)
	{
		head = head->next;
		free(frees);
		frees = head;
	}
}
