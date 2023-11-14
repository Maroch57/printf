#include "main.h"

/**
 * _putchar - prints the char c to stdout
 * @c: char to print
 *
 * Return: On success 1.
 * upon error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
