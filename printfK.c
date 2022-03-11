#include "main.h"
#include <unistd.h>

/**
* _printf - printf
* @format: a list of types of arguments passed to the function
*
* Return: the number of characters printed
*/

int _printf(const char *format, ...)
{
	va_list p;
	unsigned int i;

	pr pf_s[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_%},
	};

	va_start(p, format);

	for (i = 0; format[i]; i++)
	{
		if (format[i] != "%")
			write(1, format[i], 1);
		else
			
	}
}
