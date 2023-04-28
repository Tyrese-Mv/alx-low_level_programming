#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add item at the end
 * @head: node address
 * @str: string to add at the node
 * Return: Address of the new element or null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *NewNode = *head;

	if (str == NULL)
		return (NULL);
	while (NewNode->next != NULL)
		NewNode = NewNode->next;
	NewNode->next = malloc(sizeof(list_t));
	if (NewNode->next == NULL)
		return (NULL);
	NewNode->next->str = strdup(str);
	NewNode->next->len = strlen(str);
	NewNode->next->next = NULL;
	return (NewNode);
}
