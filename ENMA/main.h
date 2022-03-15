#ifndef PRINTF
#define PRINTF
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "main.h"
#include <stdarg.h>
/**
 * hexa - struct
 * @i: integer
 * @c: characters
 */
typedef struct rot13
{
	char c;
} rt;
/**
 * prf -prf
 * @c: characters
 * @f: pointer to function
 */
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
int print_rev(va_list r);
int print_rot13(va_list R);
int _putchar(char c);
int print_rot(va_list r);
int print_s(va_list s);
int print_ascii(va_list ascii);
#endif
