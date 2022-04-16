#include "main.h"

/**
*more_numbers - preints 10 times the numbes, from 0 to 14
*followed by new line
*Return: 1 on success, 0 otherwise
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
