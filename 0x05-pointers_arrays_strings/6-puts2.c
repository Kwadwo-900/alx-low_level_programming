#include "main.h"

/**
 * puts2 - prints 1 char out of 2 of a string
 * @str: string to print to the screen
 */

void puts2(char *str)
{
	int count, i;

	count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	for (i = 0; i < count; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
