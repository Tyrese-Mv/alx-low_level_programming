#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints each argument on each line
 * @argc: count
 * @argv: vector
 * Return: 1
 */
int main (int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
