#include "main.h"

/**
 * print_chr - prints a char.
 * @v: the argument.
 * Return: an integer value.
 */
int print_chr(va_list v)
{
	char s;

	s = va_arg(v, int);
	_putchar(s);
	return (1);
}
