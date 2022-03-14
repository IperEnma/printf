#include "main.h"
/**
 * print_unsigned - print unsigned
 * @u: valist
 * Return: aux
 */
int print_unsigned(va_list u)
{
	unsigned int c = va_arg(u, unsigned int);
	int j = 1;
	unsigned int w = 0;
	char *aux;

	w = c;
	while (w >= 10)
	{
		w = w / 10;
		j++;
	}
	aux = malloc(j);
	for (j = 0; c != 0; j++)
	{
		aux[j] = c % 10;
		c = c / 10;
	}
	for (j = (strlen(aux) - 1); j >= 0; j--)
	{
		_putchar(aux[j] + '0');
	}
	free(aux);
	return (strlen(aux - 1));
}
