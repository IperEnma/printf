#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * aux_address - aux hex
 * @h: address
 * Return: void
 */
void aux_address(unsigned long int h)
{
	if (h / 16)
	{
		aux_address(h / 16);

		if ((h % 16) < 10)
			_putchar(h % 16 + 48);
		else
			_putchar(h % 16 + 87);
	}
	else
		if ((h % 16) < 10)
			_putchar(h % 16 + 48);
		else
			_putchar(h % 16 + 87);
}
/**
 * print_address - print address
 * @a: valist
 * Return: 0
 *
 */
int print_address(va_list a)
{
	int i = 0;
	char *s = "(nil)";
	unsigned long int n = va_arg(a, unsigned long int);

	if (n == 0)
	{
		for (i = 0; s[i]; i++)
			_putchar(s[i]);
	}
	else
	{
		_putchar('0');
		_putchar('x');
		aux_address(n);

		for (i = 1; n / 16; i++)
			n = n / 16;
		i = i + 2;
	}
	return (i);
}
