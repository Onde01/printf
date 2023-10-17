#include "main.h"
/**
 * printf_string - Function
 * @val: argument
 *_strlen - Returns the length of string
 *@str: pointer string
 *Returns: length
 *
 */
int printf_string(va_list val)
{
	char *str;
	int i;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(NULL)";
		length = _strlen(str);
		for (i = 0; i < length; i++
			_putchar(str[i]);
		return (length);
	}
	else
	{
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i];
		return (length);
	}
}



