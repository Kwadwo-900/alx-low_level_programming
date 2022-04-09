#include <stdio.h>
/**
 * main - prints lower case alphabets in reverse order
 * Return: print 0 when successful
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

