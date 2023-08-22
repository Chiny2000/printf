#ifindef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/*FLAGS*/
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/*SIZES*/
#define S_LONG 2
#define S_SHORT 1

/**
 *struct fmt - operation on a structure
 *@fmt: The format structure.
 *fn: The linked function.
 */

struct fmt

{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int,);
};

/**
 *typedef struct fmt fmt t - Operation on a structure
 *@fmt: The format structure.
 *@fmt: The function linked
 */

typedef struct fmt fmt t;
int_printf(const char *format, ...);
int print_handling(const char *fmt, int *y,
va_list list, char buffer[], int flags, int width, int precision, int size);

//FUNCTIONS//

//Functions for printing characters and strings//
int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_string(va_list types, char, char buffer[],
		int flags, int width,int precision, int size);
int print_string(va_list tpes, char buffer[],
		int flags, int width, int precision, int size);
int print percent(va_list types, char buffer[],
		int flags, int width, int precision, int size);

//Function for outputting numbers//
int print_int(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_binary(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[],
		int flags, int width, int precision, int size);
int print_hexa(va_list types, char map_to[],
		char buffer[], int flags, char flag ch, int width, int precision, int size);

//Function for printing non-printable characters//
int print_non printable(va_list types, char buffer[],
		int flags, int width, int precision, int size);

//Function for printing memory address//
int print_pointer(va_list types, char buffer[],
		int flags, int width, int precision, int size);

//function for handling other specifiers//
int parse_flags(const char *format, int *y);
int width_calculation(const char *format, int *y va_list list);
int parse_precision(const char *format, int *y, va_list list);
int find_size(const char *format, int *y);

//Function for printing string in reverse//
int print_reverse(va_list types, char buffet[],
		int flags, int width, int precision, int size);

//Function for printing a string in rot 13//
int print_rot13string(va_list types, char buffer[],
		int flags, int width, int precision, int size);

//width handler//
int handle_write_char(char c, char buffer[],
		int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
		int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int ind, int length,
		int width, int flags, char padd, char extra c, int padd_start);
int write_unsgnd(int is negative, int ind,
		char buffer[],
		int flags, int width, int precision, int size);
//TOOLS//
int is_printable(char);
int append_hexa_code(char, char[], int);
int is digit(char);
long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

#endif /*MAIN


