#include "main.h"

/**
 * print_str_rev - prints a str in reverse
 * @list_args: 'va_arg' where is allocated printf args
 *
 * Return: the string
 */
int print_str_rev(va_list list_args)
{

	char *s = va_arg(list_args, char*);
	int a;
	int b = 0;

	if (s == NULL)
		s = "(null)";
	while (s[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
		_putchar(s[a]);
	return (b);
}

