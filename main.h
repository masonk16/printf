#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct fmt - function to check for formats
 * @type: The format to print
 * @f: The print function to use
 */
typedef struct fmt
{
	char *type;
	int (*f)();
} fmt_t;

int _printf(const char *format, ...);
int print_op(const char *format, fmt_t *print_arr, va_list list);
int print_char(va_list character);
int print_string(va_list string);
int print_integer(va_list integ);
int print_unsigned(va_list unsign);
int print_octal(va_list octo);
int rot13(va_list rot);
int print_hex_str(unsigned int n, unsigned int hex, char alpha);
int print_hex_l(va_list hexa);
int print_hex_u(va_list hexa);
int print_strlen(char *s);
int print_binary(va_list bin);
int _putchar(char c);
#endif
