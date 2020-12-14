#include "lists.h"

/**
 * *add_dnodeint - adds a new node at beginning.
 * @head: pointer to head element of list.
 * @n: integer to be add.
 *
 * Return: address of the new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	else
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}
