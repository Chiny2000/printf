#include "main.h"

/**
 *parse_flags-determines the active flags
 *@format: string with a defined format to display the provided arguments
 *@y:Receive an input
 *Return: The flags
 */

int *parse_flags(const char *format, int *y)
{
	/*-+0#''*/
	/*1 2 4 8 16*/
	int z, curr y:
		int flags = 0;
	const char FLAGS_CH[] = {'-','+','0','#','','\0'};
	const int FLAGS_ARR[] = {F_MINUS,F_PLUS,F_ZERO,F_HASH,F_SPACE,O};
	for (curr y= *y +1; format[curr_y] != '\0'; curr y++)
	{
		for (z=0; FLAGS_CH[z] != '0'; z++)
			if (format[curr_y] == FLAGS_CH[z])
			{
				flags |=FLAGS_ARR[z];
				break;
			}
		if (FLAGS_CH[z] == 0)
			break;
	}
	*y=curr_y-1;
	return(flags);
}
