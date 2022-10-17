#include "main.h"
/**
 * _print_s - prints a string
 * @ap: a list of arguments
 * Return: the pritable integer
 */
int _print_s(va_list ap)
{
	char *str;
	int  i = 0, str_len;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		str_len + _putchar(str[i]);
		i++;
	}
	return (i);
}
