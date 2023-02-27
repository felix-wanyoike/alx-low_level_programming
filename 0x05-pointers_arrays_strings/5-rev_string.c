#include "main.h"

/**
 *rev_string - reverses a string
 *@s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len, c, l;
	char p;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	l = len;
	len--;

	for (c = 0; c < l / 2; c++, len--)
	{
		p = s[c];
		s[c] = s[len];
		s[len] = p;
	}
}
