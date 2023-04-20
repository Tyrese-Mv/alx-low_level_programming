#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds numbers
 * @a: num1
 * @b: num2
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts numbers
 * @a: num1
 * @b: num2
 * Return: minus a from b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies numbers
 * @a: num1
 * @b: num2
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides numbers
 * @a: num1
 * @b: num2
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - reminder numbers
 * @a: num1
 * @b: num2
 * Return: check remainder of a and b
 */
int op_mod(int a, int b)
{
	return (a + b);
}
