#include "main.h"

/**
 * leet - encodes a string into 13371
 * @s: string to be decoded
 * Return: the resulting string
 */

char *leet(char *s)
{
	int i, j;

	char *al = "aAeEoOtTlL";
	char *nu = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == al[j])
			{
				s[i] = nu[j];
			}
		}
	}
	return (s);
}
