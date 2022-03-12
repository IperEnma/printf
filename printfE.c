#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 *
 *
 *
 */
int print_int(va_list i)
{
	int c = va_arg(i, int);
	int j = 1;
	int w = 0;
	char *aux;

	w = c;

	while (w >= 10)
	{
		w = w / 10;
		j++;
	}

	aux = malloc(j);

	if (c < 0)
	{
		_putchar('-');
		c = (c * -1);
	}


	for (j = 0; c != 0; j++)
	{
		aux[j] = c % 10;	
		c = c / 10;
	}
	for (j = (strlen(aux) - 1); j >= 0; j--)
	{
		_putchar(aux[j] + '0');
	}
	free (aux);
	return (strlen(aux) - 1);
}
/**
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
		{'d', print_int},
		{'i', print_int},
		/*{'o'},
		{'x'},
		{'p'},*/
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
				{
					fret += pf_s[j].f(p);
				}
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
