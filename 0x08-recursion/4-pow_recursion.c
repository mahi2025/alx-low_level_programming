#include "main.h"

/**
 * _pow_recursion - returns the value of x raised by the power of y.
 * @x: the raise value
 * @y: the power
 *
 * Return: result of power if y is < 0, otherwise -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
