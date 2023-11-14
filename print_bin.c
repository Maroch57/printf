#include "main.h"

/**
 * print_bin - prints binary num.
 * @v: argument value.
 * Return: integer
 */
int print_bin(va_list v)
{
	int flag = 0;
	int count = 0;
	int a, b = 1, c;
	unsigned int num = va_arg(v, unsigned int);
	unsigned int d;

	for (a = 0; a < 32; a++)
	{
		d = ((b << (31 - a)) & num);
		if (d >> (31 - a))
			flag = 1;
		if (flag)
		{
			c = d >> (31 - a);
			_putchar(c + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
