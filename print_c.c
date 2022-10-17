#include "main.h"
/**
 * _printf_c - function to print characters
 * @flist: list of arguments
 * Return: return no zero
 */
int _printf_c(va_list flist)
{
	char c;

	c = va_arg(flist, int);
	return (_putchar(c));
}
