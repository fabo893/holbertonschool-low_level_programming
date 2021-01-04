#include "lists.h"

/**
 * free_listint - free a list
 * @head: Pointer to head of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *fr = head;

	for (; fr;)
	{
		head = head->next;
		free(fr);
		fr = head;
	}
}
