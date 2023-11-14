#include "main.h"

/**
 * print_addn_hex - prints an hexadecimal number.
 * @numb: argument value.
 * Return: counter.
 */
int print_addn_hex(unsigned long int numb)
{
	long int a;
	long int *arr;
	long int counter = 0;
	unsigned long int rand = numb;

	while (numb / 16 != 0)
	{
		numb /= 16;
		counter++;
	}
	counter++;
	arr = malloc(counter * sizeof(long int));

	for (a = 0; a < counter; a++)
	{
		arr[a] = rand % 16;
		rand = rand / 16;
	}
	for (a = counter - 1; a >= 0; a--)
	{
		if (arr[a] > 9)
			arr[a] = arr[a] + 39;
		_putchar(arr[a] + '0');
	}
	free(arr);
	return (counter);
}

