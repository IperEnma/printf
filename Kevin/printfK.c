#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - printf
 * @format: format
 *
 * Return: amount of characters printed
 */

int _printf(const char *format, ...)
{
	va_list p;
	char *tmp;
	int i = 0, j = 0, k = 0, ret = 0, fret = 0;

	pr pf_s[] = {
		{'s', print_str}, {'c', print_char}, {'%', print_mod},
		{'d', print_int}, {'i', print_int}, {'u', print_uns},
		{'o', print_oct}, {'x', print_hex_l}, {'X', print_hex_u},
		{'r', print_rev}, {'R', print_rot13},
		{'\0', NULL}
	};

	va_start(p, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; pf_s[j].c; j++)
				if (format[i] == pf_s[j].c)
					fret += pf_s[j].f(p);
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
