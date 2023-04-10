#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: the string to be evaluated
 * @accept: the string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int k = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		if (!accept[j])
		{
			return (k);
		}
	}

	return (k);
}
