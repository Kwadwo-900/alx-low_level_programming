#include <stdio.h>

/**
 * main - prints all integers that are base 10 starting form 0
 * Return: prints 0 when successful
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
