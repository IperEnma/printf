#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * aux_ascii - function aux
 * @h: integer
 * Return: void
 */
static int aux_ascii(char c)
{
	int count;
	char diff = 'A' - ':';
	char d[2];

	d[0] = c / 16;
	d[1] = c % 16;
	for (count = 0; count < 2; count++)
	{
		if (d[count] >= 10)
			_putchar('0' + diff + d[count]);
		else
			_putchar('0' + d[count]);
	}
	return (count);
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


	if (as == NULL)
		as = "(null)";
	for (i = 0; as[i]; i++)
	{
		if (as[i] < 32 || as[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			ret += 2;
			ret += aux_ascii(as[i]);
		}
		else
		{
			_putchar(as[i]);
			ret++;
		}
	}
	return (ret++);
}
