#include "main.h"
/**
 * _print_b - print a stinr in base 2
 * @ap: list of arguments
 * Return: aldkj
 */
int _print_b(va_list ap)
{
	int pow = 2, c = 1, printd_len = 0;
	int  n = va_arg(ap, int);

	if (n < 0)
	{
		printd_len = _putchar('-');
		n *= -1;
	}
	if (n >= 0 && n <= 2)
		;
	else
	{
		while (c > 0)
		{
			if ((n / pow) >= 2)
			{
				pow *= 2;
				c++;
			}
			else
			{
				printd_len += _putchar((n / pow) + '0');
				n %= pow;
				pow /= 2;
				c--;
			}
		}
	}
	printd_len += _putchar(n + '0');

	return (printd_len);
}
