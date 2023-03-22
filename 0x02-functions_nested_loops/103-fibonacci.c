#include <stdio.h>

/**
 * main - prints sum of fibo num
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;
	int a = 1;
	int b = 2;
	int tmp;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}
		tmp = b;
		b += a;
		a = tmp;
	}
	printf("%d\n", sum);
	return (0);
}
