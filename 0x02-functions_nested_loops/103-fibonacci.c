#include <stdio.h>

/**
 * main - prints sum of fibo num
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	unsigned long int j = 1, k = 2, sum = 0, next;

	for (i = 1; i < 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + k;
		}
		next = j + k;
		j = k;
		k = next;
	}
	printf("%lu\n", sum);

	return  (0);
}
