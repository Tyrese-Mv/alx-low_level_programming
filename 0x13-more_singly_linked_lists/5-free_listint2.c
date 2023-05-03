#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees memory and sets head to null
 * @head: pointer to a hear poiter
 * Return: non return
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	while (current->next != NULL)
	{
		free(current);
		current = current->next;
	}
	free(current);
	*head = NULL;
}
