#include <stdio.h>
#include "main.h"

/**
 * main - the program prints all arguments it receives
 * @argc: number of argument
 * @argv: array of argumnet
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
