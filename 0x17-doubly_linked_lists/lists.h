#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;


/* TASK #0 */
size_t print_dlistint(const dlistint_t *h);


/* TASK #1 */
size_t dlistint_len(const dlistint_t *h);


/* TASK #2 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

#endif /* LISTS_H */