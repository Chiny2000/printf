#include "main.h"
/**
 * *parse_precision-determines the printing precidion
 * @format: string with a prescrived format for outputting the arguments
 * @y: Array of arguments intended for printing.
 * @list: array of parameters
 * Return: Precision
 */
int parse_precision(const char *format, int *y, va_list list)
{
	int cur_y= *y+1;
	int precision = -1;

	if (format[curr_y] != '.')
		return (precision);
	precision = 0;
	for (curr_y+= 1; format[curr_y] != '\0'; curr_y++)
	{
		if (is_digit(format[curr_y))
		{
			precision *=10;
			precision += format[curr_y]- '0':
		}

		else if (format[curr_y++] == '*')
		{
			curr_y++;
			precision =va_arg(list, int);
			break;
