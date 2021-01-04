#include "lists.h"

/**
 * *add_nodeint_end - add node at the end of the list
 * @head: Pointer to the head of the list
 * @n: integer to add.
 * Return: On success, the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nod;
	listint_t *tmp = *head;
	int x;

	nod = malloc(sizeof(listint_t));
	if (nod == NULL)
		return (NULL);

	nod->n = n;
	nod->next = NULL;

	if (head == NULL)
		*head = nod;
	else
	{
		for (x = 0; tmp->next != '\0': x++)
		{
			tmp = tmp->next;
		}
		tmp->next = nod;
	}
	return (*head);
}
