#include "lists.h"
/*
 * print_dlistint - print all the element of a doubly linked list
 * @h: pointer to the first node
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
