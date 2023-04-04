#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: the string for searching
 * @c: the character to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
		int dummy_x;

		while (1)
		{
			dummy_x = *s++;
			if (dummy_x == c)
			{
				return (s - 1);
			}
			if (dummy_x == 0)
			{
				return (NULL);
			}
		}
}
