#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 *
 */
int print_oct(va_list o)
{
	unsigned int octal[11];
	unsigned int i, m, n;
	int ret;

	n = va_arg(o, unsigned int);
	m = 1073741824;
	octal[0] = n / m;
	for (i = 1; i < 11; i++)
	{
		m /= 8;
		octal[i] = (n / m) % 8;
	}
	for (i = 0, ret = 0; i < 11; i++)
	{
		_putchar(octal[i] + 48);
		ret++;
	}
	return (ret);
}
int print_dec(va_list i)
{
	int b, c = 1, ret = 1, n;

	n = va_arg(i, int);
	b = n;

	if (n < 0)
	{
		_putchar(45);
		while (b <= -10)
		{
			b /= 10;
			c *= 10;
			ret++;
		}
		for (; c >= 1; c /= 10)
		{
			_putchar((((n / c) % 10) * -1) + 48);
		}
	}
	else
	{
		while (b >= 10)
		{
			b /= 10;
			c *= 10;
			ret++;
		}
		for (; c >= 1; c /= 10)
		{
			_putchar(((n / c) % 10) + 48);
		}
	}
	return (ret);
}
/*
 *
 *
 *
 */
int print_mod(va_list m)
{
	_putchar(37);
	return (1);
}
/**
 *
 *
 *
 */
int print_string(va_list s)
{
	int i = 0;
	char *aux = va_arg(s, char *);

	for (i = 0; aux[i]; i++)
	{
		_putchar(aux[i]);
	}
	return (i);
}
/**
 *
 *
 *
 */
int print_char(va_list c)
{
	char aux;

	/*printf("hola\n");*/
	aux = va_arg(c, int);

	_putchar(aux);
	return (1);
}
/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	va_list p;
	char *tmp;
	int i = 0, j = 0, k = 0, ret = 0, fret = 0;


	pr pf_s[] =
       	{
		{'s', print_string},
		{'c', print_char},
		{'%', print_mod},
		{'d', print_dec},
		{'i', print_dec},
		{'o', print_oct},
		{'\0', NULL}
	};

	va_start(p, format);

	for (i = 0; format[i]; i++)

	{	if (format[i] == '%')
		{	
			i++;

			for (j = 0; pf_s[j].c; j++)
			{
				if (format[i] == pf_s[j].c)
					fret += pf_s[j].f(p);
			}
		}
		else
		{
			_putchar(format[i]);
			ret++;
		}

	}
	ret += fret;
	return (ret);


}
