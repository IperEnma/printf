#include "main.h"

/**
 * print_rot13 - prints a string in rot13
 * @R: the string
 *
 * Return: the amount of characters of the string
 */

int print_rot13(va_list R)
{
	int i;
	char *s;

	s = va_arg(R, char *);

	for (i = 0; s[i]; i++)
	{
		while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
			{
				_putchar(s[i] += 13);
			}
			_putchar(s[i] -= 13);
		}
	}
	return (i);
}
