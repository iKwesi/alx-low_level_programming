#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: the string to be searched
 *
 * @accept: the set of bytes to search for
 *
 * Return: a pointer to the byte or NULL if
 * if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i] != '\0'; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
