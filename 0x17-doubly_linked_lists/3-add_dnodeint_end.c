#include "lists.h"

/**
 * *add_dnodeint_end - adds a new node at end.
 * @head: pointer to head element of list.
 * @n: integer to be add.
 *
 * Return: address of the new element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *traverse = *head;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->n = n;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	traverse = *head;
	while (traverse->next)
		traverse = traverse->next;

	new->prev = traverse;
	traverse->next = new;

	return (new);
}
