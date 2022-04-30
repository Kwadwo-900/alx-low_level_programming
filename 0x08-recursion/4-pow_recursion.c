#include "main.h"
/**
 * _pow_recursion - prints the power of a number
 * @x: base of power
 * @y: exponent of power
 *
 * Return: power of a number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
