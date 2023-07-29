#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 (Success),
 * On error, -1 is return and error is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
