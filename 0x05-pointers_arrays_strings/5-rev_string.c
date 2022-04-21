#include "main.h"

/**
 * rev_string -everses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char temp;
	int i, count, len;

	count = 0;
	len = 0;

	while (s[len] != '\0')
	{
		count++;
	}

	len = count - 1;

	for (i = 0; i < count / 2; i++)
	{
		temp = s[i];
		s[i] = s[len];
		s[len--] = temp;
	}
}
