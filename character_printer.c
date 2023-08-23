#include "main.h"

/*PRINT CHAR*/

/**
 * print_char-displays a character
 * @types:series of parameters
 * @buffer:Array used for managing printing data
 * @flags: Computes active flags
 * @width: width dimension
 * @precision: Accuracy indication
 * @size: dimension indication
 * Return: Quantitiy of characters output
 */

int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size
		{
		char c = va_args(types, int);
	
		return (handle_write_char(c, buffer, flags, width, precision, size));
		}
