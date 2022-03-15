#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * aux_ascii - function aux
 * @h: integer
 * Return: void
 */
int aux_ascii(unsigned int h)
{
	int i = 0;

	if (h <= 15)
	{
		_putchar('0');
		i++;
	}
	if (h / 16)
	{
		aux_ascii(h / 16);
		i++;
		if ((h % 16) < 10)
			_putchar(h % 16 + 48);
		else
			_putchar(h % 16 + 55);
	}
	else
	{
		i++;
		if ((h % 16) < 10)
			_putchar(h % 16 + 48);
		else
			_putchar(h % 16 + 55);
	}
	return (i);
}
/**
 * print_ascii - convert char no printable
 * @ascii: parameter
 * Return: ret
 */
int print_ascii(va_list ascii)
{
	int i = 0, ret = 0;
	char *as = va_arg(ascii, char *);

	for (i = 0; as[i]; i++)
	{
		if ((as[i] >= 0) && (as[i] < 32) || as[i] >= 127)
		{
			_putchar(92);
			_putchar('x');
			ret = ret + 2;
			ret = aux_ascii(as[i]);

		}
		else
		{	ret++;
			_putchar(as[i]);
		}
	}
	return (ret);
}
