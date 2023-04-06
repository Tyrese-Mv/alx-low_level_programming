#include "main.h"
/**
 * _print_rev_recursion - print in reverse
 * @s: string to print
 * Return: Void
 */
void _print_rev_recursion(char *s)
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
