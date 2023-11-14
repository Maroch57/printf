#include "main.h"
/**
 * print_unsigned - prints integer
 * @list_args: argument to print
 * Return: integer value
 */
int print_unsigned(va_list list_args)
{
	unsigned int n = va_arg(list_args, unsigned int);
	int num, last = n % 10, digit, exp = 1;
	int  a = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		a++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			a++;
		}
	}
	_putchar(last + '0');

	return (a);
}
