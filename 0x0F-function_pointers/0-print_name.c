#include "function_pointers.h"
/**
 * f - prints name
 * @*: char parameter to be printed
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
