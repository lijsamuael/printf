#include "main.h"
/**
 * _print_d - prints a number
 * @ap: list of arguments
 * Return: a pritable integer
 */
int _print_d(va_list ap)
{
	int pow = 10, c = 1, n = va_arg(ap, int), printd_len;

	if (n < 0)
	{
		printd_len = _putchar('-');
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		;
	else
	{
		while (c > 0)
		{
			if ((n / pow) >= 10)
			{
				pow *= 10;
				c++;
			}
			else
			{
				printd_len += _putchar((n / pow) + '0');
				n %= pow;
				pow /= 10;
				c--;
			}
		}
	}
	printd_len += _putchar(n + '0');

	return (printd_len);
}
