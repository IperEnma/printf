#include <stdarg.h>
#include <stdio.h>
/**
 * print_address - print address
 * @a: valist
 * Return: 0
 *
 */
int print_address(va_list a)
{
	unsigned int n = va_arg(a, unsigned int);
	(void) n;

	return (0);
}
