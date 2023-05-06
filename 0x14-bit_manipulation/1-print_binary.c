#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be converted to binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int first_one = 0;

	mask <<= ((sizeof(unsigned long int) * 8) - 1);

	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			first_one = 1;
		}
		else if (first_one)
		{
			_putchar('0');
		}
		mask >>= 1;
	}

	if (!first_one)
		_putchar('0');
}
