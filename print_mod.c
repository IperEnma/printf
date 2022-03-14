#include "main.h"
/**
 * print_mod - print '%'
 * @m: valist
 * Return: 1
 */
int print_mod(va_list m)
{
	char a = va_arg(m, int);
	(void) a;

	_putchar(37);
	return (1);
}
