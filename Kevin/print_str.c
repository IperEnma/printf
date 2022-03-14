#include "main.h"

/**
 * print_str - prints a string
 * @s: the string
 *
 * Return: the amount of characters of the string
 */

int print_str(va_list s)
{
	int i = 0;
	char *aux = va_arg(s, char *);

	for (i = 0; aux[i]; i++)
	{
		_putchar(aux[i]);
	}
	return (i);
}
