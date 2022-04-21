#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: variable to used
 */

void print_rev(char *s)
{
	int i, j, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;

	for (j = len - j; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
