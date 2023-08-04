#include <stdio.h>
#include "main.h"

/**
 * main - the program print the number of arguments passed in to it.
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
