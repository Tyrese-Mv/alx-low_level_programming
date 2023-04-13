#include <stdlib.h>
#include "main.h"
/**
 * array_range - array of min to max
 * @min: minimum number
 * @max: maximum number
 * Return: integer array
 */
int *array_range(int min, int max)
{
	int i, j, k;
	int  *arr;

	if (min > max)
	{
		return (NULL);
	}
	i = min - max;
	arr = malloc(sizeof(int) * (i + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	k = 0;
	for (j = min; j < max; j++)
	{
		arr[k] = j;
		k++;
	}
	return (arr);
}
