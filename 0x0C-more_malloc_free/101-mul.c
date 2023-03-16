#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies to arguemnts provided.
 * @argc: argument count
 * @argv: array of pointers to string argurments
 * Return: 0 -sucess, 1- Error
 */

int main(int argc, char *argv[])
{	int a, b, c;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a * b;
		printf("%d\n", c);
		return (0);
	}
	printf("Error\n");
	return (98);
}
