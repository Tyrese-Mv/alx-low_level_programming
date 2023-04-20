#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator: separator
 * @n: n
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *ch;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		ch = va_arg(list, char *);
		if (ch == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ch);
		}
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
