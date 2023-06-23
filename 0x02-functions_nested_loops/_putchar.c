#include <unistd.h>
/**
 * _putchar - writes the caracter c to stdout
 * @c: this is the character to print
 * Return: on sucess 1
 * On error, -1 is returned, and errno us set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
