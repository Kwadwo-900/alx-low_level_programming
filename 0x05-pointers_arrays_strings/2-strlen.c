#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: the variable of string ti be used
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
