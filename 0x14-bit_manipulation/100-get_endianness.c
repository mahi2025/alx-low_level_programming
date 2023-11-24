#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 if it is big, 1 if it is little
 */

int get_endianness(void)
{
	unsigned int y = 1;
	char *c;

	c = (char *) &y;

	return (*c);
}
