#include <stdarg.h>
#include "main.h"
/**
 * _printf - prints a formateed string and numbers
 * @format: the format of the arguments can be printed
 * Return: a printable integer
 */
int _printf(const char *format, ...)
{	unsigned int printf_len = 0, i = 0, k, flag = 0;
	va_list ap;
	format_func find_func[] = {
		{'c', _print_c}, {'s', _print_s}, {'i', _print_d}, {'d', _print_d},
		/** {'b', _print_b},
		* {'o', _print_o},{'u', _print_u},{'x', _print_x},{'X', _print_X},*/
		{'\0', NULL}
	};
	if (format == NULL)
		return (-1);
	va_start(ap, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i] != '\0'; i++)
		{
			printf_len += _putchar(format[i]);
		}
		flag = i + 1;
		if (format[flag] == '%')
		{
			printf_len += _putchar('%');
			i += 2;
		}
		else if (format[flag] == '\0')
			;
		else
		{
			for (k = 0; find_func[k].id; k++)
			{
				if (find_func[k].id == format[flag])
				{
					printf_len += find_func[k].f(ap);
					i += 2;
					break;
				}
			}
		}
	}
	va_end(ap);
	return (printf_len);
}
