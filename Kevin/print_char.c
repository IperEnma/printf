#include "main.h"

/**
 * print_char - prints a char
 * @c: the char
 *
 * Return: 1
 */

int print_char(va_list c)
{
	char aux;

	aux = va_arg(c, int);

	_putchar(aux);
	return (1);
}
