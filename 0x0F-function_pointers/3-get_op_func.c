#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - check for corresponding operator
 * @s: passed operator
 * Return: corresponding operator
 */
int (*get_op_func(char *s))(int, int)
{
	 op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		i++;
		if (*(ops[i].op) == *s)
			return (ops[i].f);
	}
	return (NULL);
}
