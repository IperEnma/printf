#ifndef PRINTF
#define PRINTF
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"
#include <stdarg.h>

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
int print_address(va_list a);
int print_hexU(va_list he);
int print_hexL(va_list he);
int print_octa(va_list o);
int print_unsigned(va_list u);
int print_int(va_list i);
int print_mod(va_list m);
int print_string(va_list s);
int print_char(va_list c);
int print_unknow(va_list u);
int print_bin(va_list b);
int _putchar(char c);
#endif
