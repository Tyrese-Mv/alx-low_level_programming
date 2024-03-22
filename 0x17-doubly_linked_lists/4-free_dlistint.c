#include "lists.h"
/**
 * free_dlistint - frees doubly inked list
 * @head: first node
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
