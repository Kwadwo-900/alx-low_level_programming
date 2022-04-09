#include <stdio.h>

/**
 * main - prints all digits that are numbers of base 16
 * Return: prints 0 when successful
 */

int main(void)
{
	int i;
	char ch;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

