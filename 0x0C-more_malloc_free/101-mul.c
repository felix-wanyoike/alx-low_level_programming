#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * num_checker - checks if a given char is number or not
 * @a: char to be checked
 * Return: 1, if its a number, else 0
 **/
int num_checker(char *a)
{
	int i, num, len;

	i = 0;
	num = 0;
	len = strlen(a);
	while (i < len)
	{
		if (a[i] < '0' || a[i] > '9')
		{
			return (-1);
		}
		else
			num = num * 10 + (a[i] - '0');
		i++;
	}
	return (num);
}
/**
 * main - add positive numbers
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of addition or 1
 **/
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc == 3)
	{
		a = num_checker(argv[1]);
		b = num_checker(argv[2]);
		if (a == -1 || b == -1)
		{
			printf("Error\n");
			return (98);
		}
		c = a * b;
		printf("%d\n", c);
		return (0);
	}
	printf("Error\n");
	return (98);
}
