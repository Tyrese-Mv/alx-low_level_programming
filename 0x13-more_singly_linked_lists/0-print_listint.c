#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t
 * @h: node that contains output values
 * Return: number of printed element
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t i = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
