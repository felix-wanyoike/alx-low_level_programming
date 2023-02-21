#include <stdio.h>

/**
 * main - Print the first 50 fibonacci numbers, 
 * starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */
int main(void)
{
	int l = 2;
	long int i = 1, j = 2;
	long int k;

	printf("%lu, ", i);
	while (l <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}

		k = j;
		j += i;
		i = k;
		l++;
	}

	return (0);
}
