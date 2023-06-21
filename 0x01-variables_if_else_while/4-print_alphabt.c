#include <stdio.h>
/**
 * main - Entry Point
 * Return: 0 (Sucicess)
 */
int main(void)
{
	char b;

	b = 'a';
	while (b <= 'z')
	{
		if (b == 'q' || b == 'e')
		{
			b++;
			continue;
		}
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}


