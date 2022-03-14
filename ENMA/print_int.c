#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
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
