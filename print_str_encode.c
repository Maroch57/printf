#include "main.h"
/**
 * print_str_encode -  string encoder rot13
 * @list_args: printf arguments
 * Return: counter
 *
 */
int print_str_encode(va_list list_args)
{
	int a, b, counter = 0;
	int c = 0;
	char *s = va_arg(list_args, char*);
	char al[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char bl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (a = 0; s[a]; a++)
	{
		c = 0;
		for (b = 0; al[b] && !c; b++)
		{
			if (s[a] == al[b])
			{
				_putchar(bl[b]);
				counter++;
				c = 1;
			}
		}
		if (!c)
		{
			_putchar(s[a]);
			counter++;
		}
	}
	return (counter);
}

