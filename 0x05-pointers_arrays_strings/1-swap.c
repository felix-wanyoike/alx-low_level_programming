#include "main.h"
/**
 * swap_int - Swap two integers
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
