#include <stdio.h>
#include "lists.h"
/**
 * listint_len - checks numer of elements in a linked list
 * @h: nodes to check
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	size_t i = 0;

	if (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
