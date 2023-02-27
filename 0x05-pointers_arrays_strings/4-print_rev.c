#include "main.h"

/**
 * print_rev -  prints a string, in reverse
 * @s: string to print
 * Return: void
 */

void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{}
	len--;

	for (; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
