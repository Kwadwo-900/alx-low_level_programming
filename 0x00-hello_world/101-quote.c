#include <stdio.h>
#include <unistd.h>

/**
 * main - outputs some text using the library unistd.h
 * Return:  outputs 0 when successful
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (0);
}
