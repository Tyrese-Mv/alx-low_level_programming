#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node - Adds element at the beginning
 * @head: first element
 * @str: string of the first element
 * Return: address of the element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *_newNode;

	if (str == NULL)
		return (NULL);
	_newNode = malloc(sizeof(list_t));
	if (_newNode == NULL)
		return (NULL);
	_newNode->str = strdup(str);
	if (_newNode->str == NULL)
	{
		free(_newNode);
		return (NULL);
	}
	_newNode->len = strlen(str);
	_newNode->next = *head;
	*head = _newNode;
	return (_newNode);
}
