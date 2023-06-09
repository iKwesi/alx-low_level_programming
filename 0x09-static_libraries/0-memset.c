#include "main.h"

/**
 * *_memset - fills the first n bytes of the memory area
 * @s: the memory area
 * @b: character b to be used for filling
 * @n: total number of times to to fill memory with b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
