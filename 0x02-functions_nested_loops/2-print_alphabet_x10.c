#include "main.h"
/**
 *print_ alphabet_x10 - prints the alpahbets in lower case 10 times
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i <= 10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
		_putchar('\n');
	}
}
