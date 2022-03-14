#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @r: the string
 *
 * Return: the amount of characters of the string
 */

int print_rev(va_list r)
{
	int i = 0, ret;
	char *s = va_arg(r, char *);

	while (s[i] != '\0')
	{
		i++;
	}
	ret = i;
	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (ret);
}
