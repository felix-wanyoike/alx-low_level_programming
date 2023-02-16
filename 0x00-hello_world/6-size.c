#include <stdio.h>

/**
 * main - Entry point
 *
 * Return:0
 */

int main(void)
{
	char my_character;
	int my_integer;
	long my_long;
	long long my_long_long;
	float my_float;

	printf("Size of a char: %lu byte(s)\n", sizeof(my_character));
	printf("Size of an int: %lu byte(s)\n", sizeof(my_integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(my_long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(my_long_long));
	printf("Size of a float: %lu byte(s)\n", sizeof(my_float));

	return (0);
}
