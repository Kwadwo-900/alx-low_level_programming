#include "main.h"
/**
 * alphabet_10x - prints the alpahbets in lower case 10 times
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i <= 10)
	{
		ch = 'a';

		while (ch <= 'a')
		{
			_putchar(ch);
			ch++;
		}
		i++;
		_putchar('\n');
	}
}
