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
	listint_t *current, *lastNode;

	current = (listint_t *) malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	current->next = NULL;
	if (*head == NULL)
	{
		*head = current;
		return (current);
	}
	lastNode = *head;
	while (lastNode->next != NULL)
		lastNode = lastNode->next;
	lastNode->next = current;
	return (current);
}
