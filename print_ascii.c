#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *
 * print_ascii - convert char no printable
 * @ascii: parameter
 * Return: ret
 */
int print_ascii(va_list s)
{
	int i = 0, ret = 0;
	char *as = va_arg(s, char *);
	

	if (as == NULL)
		as = "(nil)";
	for (i = 0; as[i]; i++)
	{
		if  ((as[i] > 0 && as[i] < 32) || as[i] >= 127)
		{	
			ret += _putchar(92);
			ret += _putchar('x');	
			if (as[i] <  16)
			{
				ret +=_putchar('0');
				ret +=_printf("%X", as[i]);
			}
			else
				ret +=_printf("%X", as[i]);
		}
		else
			ret +=_putchar(as[i]);
	}
	return (ret);
}
