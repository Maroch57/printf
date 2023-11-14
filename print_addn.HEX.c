#include "main.h"

/**
 * print_addn_HEX - prints a hexadecimal number.
 * @numb: it sets number to print.
 * Return: counter.
 */
int print_addn_HEX(unsigned int numb)
{
int a;
	int *arr;
	int counter = 0;
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
