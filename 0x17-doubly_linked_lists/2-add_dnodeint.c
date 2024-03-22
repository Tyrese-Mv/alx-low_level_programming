#include "lists.h"
/**
 * add_dnodeint - adds new node at the beginning
 * @head: address of the first node
 * @n: value to be added on new node
 * Return: new element or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->prev = NULL;
	new_node->next = *head;
	new_node->n = n;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
