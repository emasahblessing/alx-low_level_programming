#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int
main (void)
{
  int b;
  int e;

  for (b = 0; b < 9; b++)
    {
      for (e = b + 1; e < 10; e++)
	{
	  putchar ((b % 10) + '0');
	  putchar ((e % 10) + '0');
	  if (b == 8 && e == 9)
	    continue;
	  putchar (',');
	  putchar (' ');
	}
    }
  putchar ('\n');
  return (0);
}

