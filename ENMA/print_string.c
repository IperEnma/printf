#include "main.h"
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
