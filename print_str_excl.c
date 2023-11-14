#include "main.h"
/**
 * print_str_excl - prints out exclusuive string chars.
 * @v: argument value.
 * Return: an integer value.
 */

int print_str_excl(va_list v)
{
	char *s;
	int a, len = 0;
	int val;

	s = va_arg(v, char *);
	if (s == NULL)
		s = "(null)";
	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] < 32 || s[a] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			val = s[a];
			if (val < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_addn_HEX(val);
		}
		else
		{
			_putchar(s[a]);
			len++;
		}
	}
	return (len);
}

