#include "main.h"
/**
 *
 *
 */
void aux_unsigned(unsigned int u)
{
	if (u / 10)
	{
		aux_unsigned(u / 10);
		_putchar(u % 10 + 48);
	}
	else
		_putchar(u + 48);
}
/**
 * print_unsigned - print unsigned
 * @u: valist
 * Return: aux
 */
int print_unsigned(va_list u)
{
	int i = 0;
	unsigned int uns = va_arg(u, unsigned int);

	aux_unsigned(uns);

	for(i = 1; uns / 10; i++)
		uns = uns / 2;
	return (i);
}
