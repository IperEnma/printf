#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 * _printf - printf copu
 * @format: format receive
 * Return: ret
 */
int _printf(const char *format, ...)
{
	va_list p;
	int flag = 0;
	int i = 0, j = 0, ret = 0, fret = 0;
	pr pf_s[] = {
		{'s', print_string}, {'c', print_char}, {'%', print_mod},
		{'d', print_int}, {'i', print_int}, {'u', print_unsigned},
		{'o',  print_octa}, {'x', print_hexL}, {'X', print_hexU},
		{'n', print_unknow}, {'p', print_address}, {'\0', NULL}	};
	va_start(p, format);

	for (i = 0; format[i]; i++)
	{	flag = 0;
		if (format[i] == '%')
		{	i++;
			for (j = 0; pf_s[j].c; j++)
			{
				if (format[i] == pf_s[j].c)
				{
					fret += pf_s[j].f(p);
					flag = 1;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			ret++;
			flag = 1;
		}
		if (flag == 0)
		{
			i--;
			_putchar(37);
		}
	}
	ret += fret;
	return (ret);
}
