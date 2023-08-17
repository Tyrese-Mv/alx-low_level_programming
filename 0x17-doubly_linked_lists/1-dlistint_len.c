#include "lists.h"
/**
 * dlistint_len - number of elementsin a linked list
 * @h: the first node
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
