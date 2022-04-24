#include "main.h"

/**
 * _strcmp - copies one dtring to another
 * @s1: string to be copied
 * @s2: destination
 * Return: 0 if s1 and s2 are equal
 */

int _strcmp(char *s1, char *s2)
{
	int i, re;

	i = 0;
	re = 0;

	while (re == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		re = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (re);
}
