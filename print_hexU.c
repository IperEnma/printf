#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * aux_hex - function aux
 * @h: integer
 * Return: void
 */
void aux_hex(unsigned int h)
{
	if (h / 16)
	{
		aux_hex(h / 16);
		if ((h % 16) < 10)
			_putchar(h % 16 + 48);
		else
			_putchar(h % 16 + 55);
	}
	else
		_putchar(h % 16 + 48);
}
/**
 * print_hexU - convert decimal to hexadecimal
 * @he: valist
 * Return: aux
 */
int print_hexU(va_list he)
{
	int i = 0;
	unsigned int hex = va_arg(he, unsigned int);

	if (hex == 0)
	{
		putchar('0');
		return (1);
	}

	aux_hex(hex);
	for (i = 1; hex / 16; i++)
		hex = hex / 16;
	return (i);
}
