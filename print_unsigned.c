#include "main.h"
/**
 * aux_unsig - function aux
 * @u: unsigned
 * Return: void
 */
void aux_unsig(unsigned int u)
{
	if (u / 10)
	{
		aux_unsig(u / 10);
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

	if (uns == 0)
	{
		_putchar('0');
		return (1);
	}
	aux_unsig(uns);

	for (i = 1; uns / 10; i++)
		uns = uns / 10;
	return (i);
}
