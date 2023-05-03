#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - Frees all nodes
 * @head: first node
 * Return: non return
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	if (current == NULL)
		free(current);
	while (current->next != NULL)
	{
		free(current);
		current = current->next;
	}
	free(current);
}
