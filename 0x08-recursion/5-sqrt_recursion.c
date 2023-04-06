
#include "main.h"

/**
 * my_sqrt - verify square root
 * @i: int
 * @j: int
 *
 * Return: int
 */
int my_sqrt(int i, int j)
{
	if (i * i == j)
		return (a);
	if (i  > j/2)
		return (-1);
	return (my_sqrt(i + 1, j));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n ==1)
		return (n);
	return (my_sqrt(0, n));
}
