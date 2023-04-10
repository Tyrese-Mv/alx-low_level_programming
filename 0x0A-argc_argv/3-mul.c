#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiply two numbers
 * @argc: count
 * @argv: vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num = 0;

	if (argc == 3)
	{
		num = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", num);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
