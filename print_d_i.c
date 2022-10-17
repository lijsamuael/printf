#include "main.h"
/**
 *print_number - prints an integer
 *@flist: integer to print
 *
 *Return: no zero
 */
int print_number(va_list flist)
{
	int power = 10, c = 1, min = 0, len = 0, n = va_arg(flist, int);

	if (n < 0)
	{
		if (n == INT_MIN)
		{
			min = 1;
			n += 1;
		}
		_putchar('-');
		len++;
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		;
	else
	{
		while (c > 0)
		{
			if ((n / power) >= 10)
			{
				power *= 10;
				c++;
			}
			else
			{
				_putchar((n / power) + '0');
				n %= power;
				power /= 10;
				len++;
				c--;
			}
		}
	}
	if (min)
		n += 1;
	_putchar(n + '0');

	return (++len);
}
