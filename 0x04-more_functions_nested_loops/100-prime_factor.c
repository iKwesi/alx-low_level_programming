#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: Success Always
 */


int main(void)
{
	long int x = 612852475143;
	long int item;

	for (item = 2; item < x; item++)
	{
		if (x % item == 0)
		{
			x = x / item;
		}
	}
	printf("%ld\n", item);
	return (0);
}
