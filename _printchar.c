#include "main.h"

/**
 *print_char - Function to print character
 *@types: list of arguments
 *@buffer: buffer array to handle print
 *@flags: calculates active flags
 *@width:
 *@precision: precision specification
 *@size: size specifier
 *Return: number of char printed
 */
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}

