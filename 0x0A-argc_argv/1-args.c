#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

