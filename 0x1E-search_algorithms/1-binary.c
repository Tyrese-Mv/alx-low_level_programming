#include "search_algos.h"
/**
 * binary_search - searches for a value using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: value to search for
 * Return:  return the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t m, L = 0, R = size - 1;

	if (array == NULL)
		return (-1);
	while (L <= R)
	{
		m = (L + R) / 2;
		print_binary(array, L, R);
		if (array[m] < value)
		{
			L = m + 1;
		} else if (array[m] > value)
		{
			R = m - 1;
		}
		else
		{
			return (m);
		}
	}
	return (-1);
}

/**
 * print_binary - prints array
 * @array: array to print
 * @left: left index of array
 * @right: right index of array
*/
void print_binary(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[right]);
}

