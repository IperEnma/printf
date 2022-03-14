#include "main.h"
/**
 *
 *
 *
 */
int print_unknow(va_list u)
{       char a = va_arg(u, int);

        _putchar(37);
        _putchar(a);

	return (0);
}
