#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int b;
	int e;
	int m;

	for (b = 0; b < 8; b++)
	{
		for (e = b + 1; e < 9; e++)
		{
			for (m = e + 1; m < 10; m++)
			{
			putchar((b % 10) + '0');
			putchar((e % 10) + '0');
			putchar((m % 10) + '0');
			if (b == 7 && e == 8 && m == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
