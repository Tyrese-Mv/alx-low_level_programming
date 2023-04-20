#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main code to execute
 * @argc: argument count
 * @argv: argument vectors
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int firstNum, secondNum;
	char *oper;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	firstNum = atoi(argv[1]);
	oper = argv[2];
	secondNum = atoi(argv[3]);
	if (get_op_func(oper) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*oper == '%' && secondNum == 0) || (*oper == '/' && secondNum == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(oper)(firstNum, secondNum));
	return (0);
}

