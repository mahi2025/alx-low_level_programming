#include "main.h"

/**
 * factorial - it return the factorial of a number
 * @n: the number
 *
 * Return: factorial of n  if n < 0 return -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));

}
