#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @i: input number as int.
 *
 * Return: the absolute value of the int.
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
