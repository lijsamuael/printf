#include "main.h"
/**
 * _print_S - prints a string
 * @ap: a list of arguments
 * Return: the pritable integer
 */
int _print_S(va_list ap)
{
	unsigned char *str;
	int i = 0, str_len;

	str = va_arg(ap, unsigned char *);
	if (str == NULL)
		str = (unsigned char *) "(null)";
	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			i += 2;
		}
		else
		{
			str_len += _putchar(str[i]);
			i++;
		}

	}
	return (str_len);
}

