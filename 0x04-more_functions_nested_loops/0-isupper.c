#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: function parameter check
 *
 * Return: 1 on success 0 on failure
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
