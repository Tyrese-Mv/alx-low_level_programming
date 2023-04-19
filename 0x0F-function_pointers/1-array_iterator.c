#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - iterates through an array
 * @array: array to be iterated
 * @size: size of the array
 * @action: function to executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
