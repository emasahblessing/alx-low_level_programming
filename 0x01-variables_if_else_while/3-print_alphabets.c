#include <stdio.h>
/**
 * main - Entry point
 * Return: O (Success)
 */
int main(void)
{
	char b;

	char e;

	b = 'a';
	e = 'A';
	while (b <= 'z')
	{
	putchar(b);
	b++;
	}
	while (e <= 'Z')
	{
		putchar(e);
		e++;
	}
	putchar('\n');
	return (0);
}
