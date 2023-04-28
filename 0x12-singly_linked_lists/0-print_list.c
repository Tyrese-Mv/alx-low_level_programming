#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints the number of elements in the  linked list
 * @h: heard parameter
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%ld] %s\n", count, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
