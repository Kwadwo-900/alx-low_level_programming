#include "main.h"

/**
 * print_alphabet - prints alphabets to the stdout
 *
 *
 */


void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}

