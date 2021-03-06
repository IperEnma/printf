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
	int i = 0, j = 0, ret = 0, fret = 0, flag = 0;
	pr pf_s[] = {
		{'s', print_string}, {'c', print_char}, {'%', print_mod}, {'S', print_ascii},
		{'d', print_int}, {'i', print_int}, {'u', print_unsigned}, {'r', print_rev},
		{'o',  print_octa}, {'x', print_hexL}, {'X', print_hexU}, {'R', print_rot13},
		{'n', print_unknow}, {'p', print_address}, {'b', print_bin}, {'\0', NULL}};
	va_start(p, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{	flag = 0;
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			i++;
			for (j = 0; pf_s[j].c != '\0'; j++)
				if (format[i] == pf_s[j].c)
				{
					fret += pf_s[j].f(p);
					flag = 1;
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
			fret++;
		}
	}
	ret += fret;
	return (ret);
}
