#include "main.h"
/**
 * check_divisible - checks if n is divisale by i
 * @n: n from is prime function
 * @i: i is n - 1
 * Return: check divisible recursively
 */
int check_divisible(int n, int i)
{
	if (i == 1)
		return (0);
	if (n % i == 0)
		return (1);
	return (check_divisible(n, i - 1));
}
/**
 * is_prime_number - checks for prime number
 * @n: numner to check
 * Return: recursive fuction to check prime numbers
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (check_divisible(n, n - 1));
}
