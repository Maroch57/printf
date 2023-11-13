#include "main.h"

void print_buffer(char buffer[], int *buffer_ind);

/**
 * _printf - printf function
 * @format: format.
 * Return: the characters printed.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, chars_printed = 0;
	int flags, width, precision, size, buffer_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buffer_ind++] = format[i];
			if (buffer_ind == BUFF_SIZE)
				print_buffer(buffer, &buffer_ind);
			/* write(1, &format[i], 1);*/
			chars_printed++;
		}
		else
		{
			print_buffer(buffer, &buffer_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			printed = handle_print(format, &i, list, buffer,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			chars_printed += printed;
		}
	}

	print_buffer(buffer, &buffer_ind);

	va_end(list);

	return (chars_printed);
}

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buffer_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buffer_ind)
{
	if (*buffer_ind > 0)
		write(1, &buffer[0], *buffer_ind);

	*buffer_ind = 0;
}
