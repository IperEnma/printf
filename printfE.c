#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 *
 *
 */
void print_mod(va_list m)
{
	putchar(37);
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
					pf_s[j].f(p);
				}
			}
		}
		else
			_putchar(format[i]);
	}

}
