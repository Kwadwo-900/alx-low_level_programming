#include <stdio.h>
/**
 * main - prints all alphabets in lower case except for e and q
 * Return: prints 0 when syccessful and any other number when unsuccessful
 */

int main(void)
{
	char ad;

	for (ad = 'a'; ad <= 'z'; ad++)
	{
		if (ad != 'e' && ad != 'q')
		{
			putchar(ad);
		}
	}
	putchar('\n');

	return (0);
}
