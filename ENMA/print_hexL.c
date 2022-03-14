#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * print_hexL - convert decimal to hexadecimal
 * @he: valist
 * Return: aux
 */
int print_hexL(va_list he)
{
	int i = 0, t = 0;
	unsigned int n = va_arg(he, unsigned int), c = n, h = 0;
	char *aux;
	hex hexadecimal[] = {
		{0, '0'}, {1, '1'}, {2, '2'}, {3, '3'},
		{4, '4'}, {5, '5'}, {6, '6'}, {7, '7'},
		{8, '8'}, {9, '9'}, {10, 'a'}, {11, 'b'},
		{12, 'c'}, {13, 'd'}, {14, 'e'}, {15, 'f'},
		{16, '\0'} };

	for (i = 0; c >= 16; i++)
		c = c / 16;
	aux = malloc(i);
	for (i = 0; n >= 16; i++)
	{
		h = n % 16;
		for (t = 0; hexadecimal[t].i != 16; t++)
		{
			if (hexadecimal[t].i == h)
				aux[i] = hexadecimal[t].c;
		}
		n = n / 16;
	}
	for (t = 0; hexadecimal[t].i != 16; t++)
	{
		if (hexadecimal[t].i == n)
		aux[i] = hexadecimal[t].c;
	}
	for (i = strlen(aux); i >= 0; i--)
		_putchar(aux[i]);
	free(aux);
	return (strlen(aux - 1));
}
