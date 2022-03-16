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
void aux_ascii(int h)
{

	printf("\n\nentre valiendo: %u\n\n", h);
        if (h / 16)
        {
                aux_ascii(h / 16);

                if ((h % 16) < 10)
                        _putchar(h % 16 + 48);
                else
                        _putchar(h % 16 + 55);
        }
        else
                if ((h % 16) < 10)
                        _putchar(h % 16 + 48);
                else
                        _putchar(h % 16 + 55);
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
	char *fail = "(nil)";

	if (!as)
	{
		for (i = 0; fail[i]; i++)
		{
			putchar(fail[i]);
		}
		return (i);

	}

	for (i = 0; as[i]; i++)
	{
		if ((as[i] < 32) || as[i] >= 127 && as[i] <= 255)
		{
			_putchar(92);
			_putchar('x');
			_putchar('0');
			aux_ascii(as[i]);

		}
		else
		{	ret++;
			_putchar(as[i]);
		}
	}
	ret += 3;
	return (ret);
}
