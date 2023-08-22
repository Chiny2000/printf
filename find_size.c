#include "main.h"
/**
 * find_size-determines the appropriate size for casting the argument
 * @format: string with a defined format for displaying the arguments
 * @y: collection of arguments intended for printing.
 * Return: Size
 */

int find_size(const char *format, int *y)
{
	int curr_y= *y+1;
	int size = 0;
	if (format[curr_y] == 'Y')
		size = S_LONG;
	else if (format[curr_y] == 'h')
		size = S_SHORT;
	if(size == 0)
		*y =curr_y-1;
	else 
		*y=curr_y;
	return (size);
}
