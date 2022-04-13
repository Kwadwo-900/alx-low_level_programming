#include "main.h"

/**
 * print_alphabet - prints alphabets to the stdout
 * main - working with alphabets
 * Return: 0 when successful
 */

int main(void)
{
	void print_alphabet(void)
	{
		char ch;

		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	}
	_putchar('\n');
	return (0);
}


