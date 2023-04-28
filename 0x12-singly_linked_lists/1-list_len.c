#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns number of elements
 * @h: list parameter
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h->next != NULL)
	{
		if (h->str != NULL)
			count++;
		h = h->next;
	}
	return (count);
}
