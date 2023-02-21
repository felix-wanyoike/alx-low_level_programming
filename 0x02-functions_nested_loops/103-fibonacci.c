#include <stdio.h>

/**
 * main - Print the sum of even Fibonacci
 *  numbers up to a fib value
 * not exceeding 4,000,000.
 * Return: 0
 */
int main(void)
{
	int i = 1, j = 2, l = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			l += j;

		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", l);
	return (0);

