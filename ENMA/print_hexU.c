#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
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
