#include "main.h"
/**
 * _print_b - convert a decimal in a base 2
 *  @flist: list of arguments int
 *  Return: len
 */
int _print_b(va_list flist)
{
	long int base = 2;
	long int n = (long int)va_arg(flist, unsigned int);
	int c = 1, len = 0;
	char w = '\0';

	if (n < 2)
	{
		w = n == 0 ? '0' : '1';
		_putchar(w);
	}
	else
	{
		while (c > 0)
		{
			if ((n / base) >= 2)
			{
				base *= 2;
				c++;
			}
			else
			{
				w = (n / base) + '0';
				_putchar(w);
				n %= base;
				base /= 2;
				len++;
				c--;
			}
		}
		w = n + '0';
		_putchar(w);
	}
	return (++len);
}
