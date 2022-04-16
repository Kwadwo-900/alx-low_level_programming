#include <stdio.h>
#include "main.h"

/**
 * main - prints 1 to 100, replaces Fizz with multiples of ,
 * Buzz with multiples of 5, and FizzBuzz with multiples of 3 and 5
 * Return: 1 on success, 0 otherwise
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 != 0)
			printf(" Fizz");
		else if (n % 5 == 0 && n % 3 != 0)
			printf(" Buzz");
		else if (n % 3 == 0 && n % 5 == 0)
			printf(" FizzBuzz");
		else if (n == 1)
			printf("%d", n);
		else
			printf(" %d", n);
	}
	printf("\n");

	return (0);
}
