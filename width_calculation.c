#include "main.h"
/**
 * width_calculation- Determines the printing width
 * @format: string with a specified format for displaying the arguments
 * @y:Array of arguments for printing
 * @list: Array of parameters.
 * Return: width
 */

int width_calculation(const char *format, int *y, va_list list)
{
	int curr_y;
	int width = 0;
	for (curr_y= *y+1; format[curr_y] != '\0'; curr_y++)
	{
		if(is_digit(format[curr_y]))
		{
			width*=10;
			width +=format[curr_y] - '0';
		}
		else if (format[curr_y] == '*')
		{
			curr_y++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}
	*y = curr_y-1;
	return (width);
}
