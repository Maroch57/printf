#include "main.h"

/**
 * print_ptr - prints an hexadecimal number.
 * @v: argument value.
 * Return: counter.
 */
int print_ptr(va_list v)
{
	void *p;
	char *s = "(nil)";
	long int c;
	int b;
	int a;

	p = va_arg(v, void*);
	if (p == NULL)
	{
		for (a = 0; s[a] != '\0'; a++)
		{
			_putchar(s[a]);
		}
		return (a);
	}

	c = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_addn_hex(c);
	return (b + 2);
}
