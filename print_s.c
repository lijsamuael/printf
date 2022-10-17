#include "main.h"
/**
 * _printf_s - function to print strings
 * @flist: list of arguments
 * Return: no zero
 */
int _printf_s(va_list flist)
{
	char *ptr = NULL, *_null = "(null)";
	unsigned int len = 0;

	ptr = va_arg(flist, char *);
	if (ptr == NULL)
	{
		ptr = _null;
	}
	while (*ptr)
	{
		_putchar(*ptr);
		ptr++;
		len++;
	}
	return (len);
}
