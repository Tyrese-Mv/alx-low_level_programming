#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums up all arguments
 * @n: number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list i;
	unsigned int k;
	int l;

	if (n == 0)
		return (0);

	va_start(i, n);
	l = 0;
	for (k = 0; k < n; k++)
	{
		l += va_arg(i, int);
	}
	va_end(i);
	return (l);
}
