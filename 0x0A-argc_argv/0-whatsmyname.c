#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - outputs first argument
 * @argc: argument count
 * @argv: argument variable
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
