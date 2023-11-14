#include "main.h"
/**
 * print_int - prints integer to base 10
 * @list_args: argument to print
 * Return: integer
 */
int print_int(va_list list_args)
{
	int n = va_arg(list_args, int);
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

/**
 * print_dec - prints decimal int
 * @list_args: argument to print
 * Return: integer
 */

int print_dec(va_list list_args)
{
	int n = va_arg(list_args, int);
	int num, last = n % 10, digit;
	int  a = 1;
	int exp = 1;

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
