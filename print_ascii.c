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
static int aux_ascii(char h)
{
	int i = 1;
        
	do {
		if (h / 16)
        	{	
			i++;
			h = h / 16;
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
	} while (h / 16);

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

	ret = ret;
	return (ret++);
}
