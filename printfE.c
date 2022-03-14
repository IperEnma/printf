#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"
/**
 *
 *
 *
 */
/**
 *
 *
 *
 */
int print_address(va_list a)
{
	unsigned int n = va_arg(a, unsigned int);

	printf("addres: %u\n", n);
}
/**
 *
 *
 *
 */
int print_unknow(va_list u)
{	char a = va_arg(u, int);

	_putchar(37);
	_putchar(a);
}
/**
 *
 *
 *
 */
int print_hexU(va_list he)
{
        int i = 0, t = 0;
        unsigned int n = va_arg(he, unsigned int);
        unsigned int c = n;
        unsigned int h = 0;
        int m = 0;
        char auxc;
        char *aux;
        hex hexadecimal[] =
        {
                {0, '0'},
                {1, '1'},
                {2, '2'},
                {3, '3'},
                {4, '4'},
                {5, '5'},
                {6, '6'},
                {7, '7'},
                {8, '8'},
                {9, '9'},
                {10, 'A'},
                {11, 'B'},
                {12, 'C'},
                {13, 'D'},
                {14, 'E'},
                {15, 'F'},
                {16, '\0'}
        };

        for (i = 0; c >= 16; i++)
        {
                c = c / 16;
        }
	        aux = malloc(i);

        if (n < 0)
        {
                _putchar('-');
                n = (n * -1);
        }

        for (i = 0; n >= 16; i++)
        {
                h = n % 16;
                for (t = 0; hexadecimal[t].i != 16; t++)
                {
                        if (hexadecimal[t].i == h)
                        {
                                aux[i] = hexadecimal[t].c;
                        }
                }
                n = n / 16;
        }

        for(t = 0; hexadecimal[t].i != 16; t++)
        {
                if (hexadecimal[t].i == n)
                {
                        aux[i] = hexadecimal[t].c;
                }
        }
        for (i = strlen(aux); i >= 0; i--)
        {
                _putchar(aux[i]);
        }
	free(aux);
	return (strlen(aux - 1));
}
/**
 *
 *
 *
 */
int print_hexL(va_list he)
{
	int i = 0, t = 0;
	unsigned int n = va_arg(he, unsigned int);
	unsigned int c = n;
	unsigned int h = 0;
	int m = 0;
	char auxc;
	char *aux;
	hex hexadecimal[] =
       	{
		{0, '0'},
		{1, '1'},
		{2, '2'},
		{3, '3'},
		{4, '4'},
		{5, '5'},
		{6, '6'},
		{7, '7'},
		{8, '8'},
		{9, '9'},
		{10, 'a'},
		{11, 'b'},
		{12, 'c'},
		{13, 'd'},
		{14, 'e'},
		{15, 'f'},
		{16, '\0'}
	};

	for (i = 0; c >= 16; i++)
	{	
		c = c / 16;
	}

	aux = malloc(i);

	if (n < 0)
	{
		_putchar('-');
		n = (n * -1);
	}

	for (i = 0; n >= 16; i++)
	{
		h = n % 16;
		for (t = 0; hexadecimal[t].i != 16; t++)
		{
			if (hexadecimal[t].i == h)
			{	
				aux[i] = hexadecimal[t].c;
			}
		}
		n = n / 16;
	}
	
	for(t = 0; hexadecimal[t].i != 16; t++)
	{
		if (hexadecimal[t].i == n)
		{
			aux[i] = hexadecimal[t].c;
		}
	}
	for (i = strlen(aux); i >= 0; i--)
	{	
		_putchar(aux[i]);
	}
	free(aux);
	return (strlen(aux - 1));
}
/**
 *
 *
 *
 */
int print_octa(va_list o)
{
	unsigned int octal[11];
        unsigned int i, m, n;
        int ret;

        n = va_arg(o, unsigned int);
        m = 1073741824;
        octal[0] = n / m;
        for (i = 1; i < 11; i++)
        {
                m /= 8;
                octal[i] = (n / m) % 8;
        }
        for (i = 0, ret = 0; i < 11; i++)
        {
                _putchar(octal[i] + 48);
                ret++;
        }
        return (ret);
}
/**
 *
 *
 *
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

        if (c < 0)
        {
                _putchar('-');
                c = (c * -1);
        }


        for (j = 0; c != 0; j++)
        {
                aux[j] = c % 10;
                c = c / 10;
        }
        for (j = (strlen(aux) - 1); j >= 0; j--)
        {
                _putchar(aux[j] + '0');
        }
        free (aux);
        return (strlen(aux - 1));
}
/**
 *
 *
 *
 */
int print_int(va_list i)
{
	int c = va_arg(i, int);
	int j = 1;
	int w = 0;
	char *aux;

	w = c;

	while (w >= 10)
	{
		w = w / 10;
		j++;
	}

	aux = malloc(j);
	
	if (c < 0)
	{
		_putchar('-');
		c = (c * -1);
	}


	for (j = 0; c != 0; j++)
	{
		aux[j] = c % 10;	
		c = c / 10;
	}
	for (j = (strlen(aux) - 1); j >= 0; j--)
	{
		_putchar(aux[j] + '0');
	}
	free (aux);
	return (strlen(aux) - 1);
}
/**
 *
 *
 */
int print_mod(va_list m)
{
	_putchar(37);
	return (1);
}
/**
 *
 *
 *
 */
int print_string(va_list s)
{
	int i = 0;
	char *aux = va_arg(s, char *);
	
	for (i = 0; aux[i]; i++)
	{
		_putchar(aux[i]);
	}
	return (i);
}
/**
 *
 *
 *
 */
int print_char(va_list c)
{
	char aux;

	/*printf("hola\n");*/
	aux = va_arg(c, int);

	_putchar(aux);
	return (1);
}
/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	va_list p;
	char *tmp;
	int flag = 0;
	int i = 0, j = 0, k = 0, ret = 0, fret = 0;


	pr pf_s[] =
       	{
		{'s', print_string},
		{'c', print_char},
		{'%', print_mod},
		{'d', print_int},
		{'i', print_int},
		{'u', print_unsigned},
		{'o',  print_octa},
		{'x', print_hexL},
		{'X', print_hexU},
		{'n', print_unknow},
		{'p', print_address},
		{'\0', NULL}
	};

	va_start(p, format);

	for (i = 0; format[i]; i++)
	{	
		flag = 0;
		if (format[i] == '%')
		{	
			i++;
			for (j = 0; pf_s[j].c; j++)
			{
				if (format[i] == pf_s[j].c)
				{
					fret += pf_s[j].f(p);
					flag = 1;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			ret++;
			flag = 1;
		}
		if (flag == 0)
		{
			i--;
			_putchar(37);
		}
	}
	ret += fret;
	return (ret);

}
