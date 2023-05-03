#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds node at the end of the list
 * @head: pointer to a pointer of the head
 * @n: number to assign to the node
 * Return: address of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;

	while (current->next != NULL)
		current = current->next;
	current->next = (listint_t *) malloc(sizeof(listint_t));
	if (current->next == NULL)
		return (NULL);
	current->next->n = n;
	current->next->next = NULL;
	return (current->next);
}
