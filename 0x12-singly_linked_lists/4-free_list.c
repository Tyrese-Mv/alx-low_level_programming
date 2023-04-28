#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees allocated memory
 * @head: nodes to deallocate
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *Dealloc;
	
	while (head != NULL)
	{
		Dealloc = head;
		head = head->next;
		free(Dealloc->str);
		free(Dealloc);
	}
}

