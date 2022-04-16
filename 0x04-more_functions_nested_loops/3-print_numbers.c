#include "main.h"

/**
 * print_numbers - prints digits form 0 to 9
 * Return: 1 on success, 0 otherwise
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
