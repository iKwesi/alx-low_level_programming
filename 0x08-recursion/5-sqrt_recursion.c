
#include "main.h"

/**
 * check_sqrt - verify square root
 * @i: int
 * @j: int
 *
 * Return: int
 */
int check_sqrt(int i, int j)
{
	if (i * i == j)
		return (a);
	if (i * i > j)
		return (-1);
	return (check_sqrt(i + 1, j));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check_sqrt(1, n));
}
