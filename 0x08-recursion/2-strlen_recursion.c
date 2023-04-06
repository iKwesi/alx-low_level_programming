#include "main.h"
/**
 * _strlen_recursion - returns the length of string
 * @s: pointer to string s
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);

	}
	return (i);
}
