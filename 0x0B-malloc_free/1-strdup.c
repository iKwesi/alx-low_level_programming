#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated
*space in memory, which contains a copy of the
*string given as a parameter.
*@str: String to be copied
*
*Return: NULL in case of error, pointer to allocate space
*
*/

char *_strdup(char *str)
{
	char *charptr;
	int index, len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	charptr = malloc(sizeof(char) * (len + 1));

	if (charptr == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
	{
		charptr[index] = str[index];
	}

	charptr[len] = '\0';

	return (charptr);

}
