#include "main.h"

/**
 * print_string - prints string to stdout
 * @string: list
 * Return: number of char
 */

int print_string(va_list string)
{
	int len;
	char *print_string;

	print_string = va_arg(string, char *);
	if (print_string == NULL)
		print_string = "(null)";
	len = 0;

	while (print_string[len] != '\0')
		len = len + _putchar(print_string[len]);
	return (len);
}
