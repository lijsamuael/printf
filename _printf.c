#include "main.h"
#include <stdarg.h>
/**
 *_printf - prints an specified format
 *@format: format to print
 *Return: return length of the print
 */
int _printf(const char *format, ...)
{
	function_t identity_f[] = {{'c', _printf_c}, {'s', _printf_s},
		{'i', print_number}, {'d', print_number}, {'b', _print_b},
		/*{'o', _print_o}, {'u', _print_u}, {'x', _print_x},{'X', _print_X},*/
		{'\0', NULL}};
	va_list flist;
	unsigned int len_printf = 0, i = 0, k = 0, flag = 0;
	char j = '\0';

	if (format == NULL || (format[i] == '%' && format[1] == '\0'))
		return (-1);
	va_start(flist, format);
	while (format[i])
	{
		for (; format[i] != '%' && format[i] != '\0'; i++)
		{
			j = format[i];
			len_printf += _putchar(j);
		}
		flag = i + 1;
		if (format[flag] == '%' && format[i])
			_putchar('%'), len_printf++, i += 2;
		else if (format[flag] == '\0')
			i++;
		else
		{
			for (k = 0; identity_f[k].id && format[i]; k++)
			{
				if (identity_f[k].id == format[flag])
				{
					len_printf += identity_f[k].f(flist);
					i += 2;
					break;
				}
			}
		}
		if (identity_f[k].id == '\0' && format[i])
			_putchar(format[i++]), len_printf++;
	}
	va_end(flist);
	return (len_printf);
}
