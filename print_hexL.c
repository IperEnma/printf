#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * aux_hexL - function aux
 * @h: integer
 * Return: void
 */
void aux_hexL(unsigned int h)
{
	if (h / 16)
	{
		aux_hexL(h / 16);

		if ((h % 16) < 10)
			_putchar(h % 16 + 48);
		else
			_putchar(h % 16 + 87);
	}
	else
		_putchar(h % 16 + 48);
}
/**
 * print_hexL - convert decimal to hexadecimal
 * @he: valist
 * Return: aux
 */
int print_hexL(va_list he)
{
	int i = 0;
	unsigned int hex = va_arg(he, unsigned int);

	aux_hexL(hex);

	for (i = 1; hex / 16; i++)
		hex = hex / 16;
	return (i);
}
