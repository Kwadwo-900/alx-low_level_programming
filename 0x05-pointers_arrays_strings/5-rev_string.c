#include "main.h"

/**
 * rev_string -everses a string
 * @s: string to be reversed
 * Returnn: 0 on success, 1 otherwise
 */

void rev_string(char *s)
{
	char temp;
	int i, count, len;

	count = 0;
	len = 0;

	while (s[count] != '\0')
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
