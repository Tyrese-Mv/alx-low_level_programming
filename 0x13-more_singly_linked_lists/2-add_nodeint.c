#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds node at the beginning
 * @head: pointer to a pointer of the first node
 * @n: value to be added
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *) malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
