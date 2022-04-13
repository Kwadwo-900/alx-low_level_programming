#include "main.h"
/**
 * alphabet_10x - prints the alpahbets in lower case 10 times
 */

void alphabet_10x(void)
{
	char ch;
	int i;

	i = 0;

	while (i <= 10)
	{
		char ch = 'a';

		while (ch <= 'a')
		{
			_putchar(ch);
			ch++;
		}
		i++;
	}
	_putchar('\n');
}
