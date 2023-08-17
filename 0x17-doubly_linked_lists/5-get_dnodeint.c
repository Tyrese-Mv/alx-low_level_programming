#include "lists.h"
/**
 * get_dnodeint_at_index - gets nth node
 * @index: index of node to return
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	if (head == NULL)
		return NULL;
	current = head;
	for(i = 0; current->next->next != NULL; i++)
	{
		if (i == index)
			break;
		current = current->next;
	}
	return (current);
}
