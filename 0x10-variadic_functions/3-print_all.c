#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - prints all
 * @format: format to be tested
 */
void print_all(const char * const format, ...)
{
	const char *ch = format;
	va_list list;
	char ch2, *str;
	int i;
	float j;

	va_start(list, format);
	while (*ch)
	{
		switch (*ch++)
		{
			case 'c':
				ch2 = (char) va_arg(list, int);
				printf("%c", ch2);
				break;
			case 'i':
				i = va_arg(list, int);
				printf("%d", i);
				break;
			case 'f':
				j = (float) va_arg(list, int);
				printf("%f", j);
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				printf("%s", str);
				break;
			default:
				continue;
		}
	}
	va_end(list);
	printf("\n");
}
