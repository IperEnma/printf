#ifndef PRINTF
#define PRINTF

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct hexa
{
	unsigned int i;
	char c;
} hex;

typedef struct prf
{
	char c;
	int (*f)(va_list p);

} pr;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list c);
int print_str(va_list s);
int print_int(va_list i);
int print_mod(va_list m);
int print_uns(va_list u);
int print_oct(va_list o);
int print_hex_l(va_list x);
int print_hex_u(va_list X);
#endif
