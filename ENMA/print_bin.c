#include "main.h"
/**
 * aux_mod - helper to print
 * @b: number to convert
 * Return: void
 */
void aux_mod(unsigned int b)
{
	if (b / 2)
	{
		aux_mod(b / 2);
		_putchar(b % 2 + 48);
	}
	else
		_putchar(b % 2 + 48);
}
/**
 * print_bin - convert number to binary
 * @b: valist
 * Return: i
 */
int print_bin(va_list b)
{
	int i = 1;
	unsigned int bin = va_arg(b, unsigned int);

	aux_mod(bin);

	for (i = 1; bin / 2; i++)
		bin = bin / 2;
	return (i);
}
