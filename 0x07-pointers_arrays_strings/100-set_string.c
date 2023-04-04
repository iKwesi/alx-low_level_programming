#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: the pointer to use
 * @to: the string to set to a pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
