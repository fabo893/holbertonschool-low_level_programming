#include "lists.h"

/**
 * *add_nodeint - add a node at the beginnig of the list
 * @head: Pointer to the head of the list.
 * @n: integer to add
 * Return: On success, the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nod;

	if (head == NULL)
		return (NULL);

	nod = malloc(sizeof(listint_t));
	if (nod == NULL)
		return (NULL);

	nod->n = n;
	nod->next = *head;
	*head = nod;

	return (*head);
}
