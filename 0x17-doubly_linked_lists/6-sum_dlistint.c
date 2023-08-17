#include "lists.h"
/**
 * sum_dlistint - adds all node values
 * @head: first node
 * Return: sum of all nodes
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;
	unsigned int i;

	if (head == NULL)
		return (0);
	current = head;
	for (i = 0; current != NULL; i++)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
