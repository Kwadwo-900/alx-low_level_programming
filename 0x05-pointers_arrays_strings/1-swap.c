#include "main.h"

/**
 * swap_int - swaps the vlaues of two values
 * @a: one the values to be swapped
 * @b: another value to be swapeed with a
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
