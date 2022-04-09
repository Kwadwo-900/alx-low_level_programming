#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 * Return: prints 0 when sucessful
 */

int main(void)
{
	char df;

	for (df = 'a'; df <= 'z'; df++)
	{
		putchar(df);
	}
	putchar('\n');

	return (0);
}
