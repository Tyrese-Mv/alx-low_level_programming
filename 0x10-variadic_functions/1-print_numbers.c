#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: separator
 * @n: n
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	int i, k;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		k = va_arg(list, int);
		printf("%d", k);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
