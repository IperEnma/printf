#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *
 *
 *
 *
int aux_ascii(char c)
{
	putchar(c);

}
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
		as = "(null)";
	for (i = 0; as[i]; i++)
	{
		if  ((as[i] > 0 && as[i] < 32) || as[i] >= 127)
		{	
			_putchar(92);
			_putchar('x');	
			if (as[i] <  16)
			{
				_putchar('0');
				_printf("%X", as[i]);
			}
			else
				_printf("%X", as[i]);
		}
		else
			_putchar(as[i]);
	}
	return (ret++);
}
