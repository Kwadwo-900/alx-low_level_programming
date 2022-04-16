#include "main.h"

/**
 * print_line - draws a straight line
 * @m: number of times the _ is printed
 * Return: 1 is successful, 0 otherwise
 */

void print_line(int m)
{
	if (m <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= m; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
