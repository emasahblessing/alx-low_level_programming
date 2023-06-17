#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int b;

	for (b = 48; b <= 57; b++)
	{
		putchar(b);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
