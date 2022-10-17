
#include "main.h"

/**
 * _print_S - prints a string with no pritable cahracters
 * @S: string to print
 * Return: length of character
 */
int _print_S(va_list S)
{
	unsigned int i;
	int count = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
