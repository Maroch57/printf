#include "main.h"
/**
 * print_str - prints out a string.
 * @v: the argument.
 * Return: the string length.
 */

int print_str(va_list v)
{
	char *s;
	int a, len;

	s = va_arg(v, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (a = 0; a < len; a++)
			_putchar(s[a]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (a = 0; a < len; a++)
			_putchar(s[a]);
		return (len);
	}
}
