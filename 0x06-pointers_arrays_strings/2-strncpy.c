#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destinatins of string
 * @src: source of string
 * @n: number of bytes to copy
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
