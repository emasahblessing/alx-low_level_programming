#include "main.h"
/**
 * print_sign - to print the sign of a number
 * @n: the numero we wanna check
 * Return: 1 if greater than zero, 0 if 0, -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
