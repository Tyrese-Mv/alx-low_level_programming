#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - checks for integer
 * @size: size of the array
 * @array: array to search
 * @cmp: function pointer
 * Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
