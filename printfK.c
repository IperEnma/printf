#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 *
 */
void print_dec(va_list d)
{
	int a, b, c, n;

	n = va_arg(d, int);

	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		_putchar('1');
		_putchar('4');
		_putchar('7');
		_putchar('4');
		_putchar('8');
		_putchar('3');
		_putchar('6');
		_putchar('4');
		_putchar('8');
	}
	else
	{
		if (n < 0)
		{
			a = n * -1;
			_putchar(45);
		}
		else
		{
			a = n;
		}
		b = a;
		c = 1;
		while (b >= 10)
		{
			b /= 10;
			c *= 10;
		}
		for (; c >= 1; c /= 10)
		{
			_putchar(((a / c) % 10) + 48);
		
		}
	}
}
/*
 *
 *
 *
 */
void print_mod(va_list m)
{
	_putchar(37);
}
/**
 *
 *
 *
 */
void print_string(va_list s)
{
	int i = 0;
	char *aux = va_arg(s, char *);

	for (i = 0; aux[i]; i++)
	{
		_putchar(aux[i]);
	}
}
/**
 *
 *
 *
 */
void print_char(va_list c)
{
	char aux;

	/*printf("hola\n");*/
	aux = va_arg(c, int);

	_putchar(aux);
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
	int i = 0, j = 0, k = 0;


	pr pf_s[] =
       	{
		{'s', print_string},
		{'c', print_char},
		{'%', print_mod},
		{'d', print_dec},
		{'i', print_dec},
		{'\0', NULL}
	};

	va_start(p, format);

	for (i = 0; format[i]; i++)

	{	if (format[i] == '%')
		{	
			/*printf("hola estoy en el if\n");*/
			i++;

			for (j = 0; pf_s[j].c; j++)
			{

				/*printf("hola estoy en el segundo for\n");*/
				if (format[i] == pf_s[j].c)
					pf_s[j].f(p);
			}
		}
		else
			_putchar(format[i]);
	}


}
