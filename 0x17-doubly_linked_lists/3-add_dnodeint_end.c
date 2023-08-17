#include "lists.h"
/**
 * add_dnodeint_end - adds node at the end of the list
 * @head: all nodes
 * @n: value to be added
 * Return: address to new element or null
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = malloc(sizeof(dlistint_t));
	if (current->next == NULL)
		return (NULL);
	current->next->n = n;
	current->next->next = NULL;
	current->next->prev = current;
	return (current->next);
}
