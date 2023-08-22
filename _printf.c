#include "main.h"
void print_buffer(char buffet[], int *buff_ind);

/**
 * _printf - printing function
 * @format: format structure
 * Return: displayed characters
 */

int_printf(const char *format, ...)

{
	int y, printed = 0, printed_chars = 0;
	int flags, width, preceision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF - SIZE];

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (y = 0; format && format[y] != '\0' : y++)
	{
		if (format[y] != '%')
		{
			buffer[buff_ind++] = format[y];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			/*write(1, &format[y], 1);*/
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = parse_flags(format, &y);
			width = width_calculation(format, &y, list);
			precision = parse_precision(format, &y, list);
			size = find_size(format, &y);
			++y;
			printed = printing_handling(format, &y, list, buffer, flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}
	prin_buffer(buffer, &buff_ind);
	va_end(list);
	return (printed_chars);
}
/**
 * print_buffer - if the buffer exists, it displays its contents
 * @buffer: sequence of character
 * @buff_ind: index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0] * buff_ind);
	*buff_ind = 0;
}
