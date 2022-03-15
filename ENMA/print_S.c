#include "main.h"
/**
 *
 *
 *
 */
void aux_hex(unsigned int h)
{
        if (h / 16)
        {
                aux_hex(h / 16);
                if ((h % 16) < 10)
                        _putchar(h % 16 + 48);
                else
                        _putchar(h % 16 + 55);
        }
        else
                if ((h % 16) < 10)
                        _putchar(h % 16 + 48);
                else
                        _putchar(h % 16 + 55);
}
/**
 *
 *
 *
 */
int print_s(va_list S)
{
	char *s = va_arg(S, char *);

	if (S >= 0 & S <= 32 || S >= 127)
	{
		aux_hex(S);
	}
}
