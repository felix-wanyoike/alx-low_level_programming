#include "main.h"

/**
* main - Entry Point. Prints "_putchar"
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char toPrint[] = "_putchar";

	for(i=0;i<8;i++)
	{
		_putchar(toPrint[i]);
	}
	_putchar('\n');
	return 0;
}
