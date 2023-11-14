#include "main.h"

/**
 * print_HEX - prints a hexadecimal number.
 * @v: argument value.
 * Return: counter.
 */
int print_HEX(va_list v)
{
	int a;
	int *arr;
	int counter = 0;
	unsigned int numb = va_arg(v, unsigned int);
	unsigned int rand = numb;

	while (numb / 16 != 0)
	{
		numb /= 16;
		counter++;
	}
	counter++;
	arr = malloc(counter * sizeof(int));

	for (a = 0; a < counter; a++)
	{
		arr[a] = rand % 16;
		rand /= 16;
	}
	for (a = counter - 1; a >= 0; a--)
	{
		if (arr[a] > 9)
			arr[a] = arr[a] + 7;
		_putchar(arr[a] + '0');
	}
	free(arr);
	return (counter);
}
