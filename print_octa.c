#include "main.h"
/**
 * aux_octa - helper to print
 * @b: number to convert
 * Return: void
 */
void aux_octa(unsigned int b)
{
	if (b / 8)
	{
		aux_octa(b / 8);
		_putchar(b % 8 + 48);
	}
	else
		_putchar(b % 8 + 48);
}
/**
 * print_octa - convert number to octa
 * @o: valist
 * Return: i
 */
int print_octa(va_list o)
{
	int i = 1;
	unsigned int oct = va_arg(o, unsigned int);

	aux_octa(oct);

	for (i = 1; oct / 8; i++)
		oct = oct / 8;
	return (i);
}
