#ifndef PRINTF
#define PRINTF

#include <stdarg.h>
typedef struct prf
{
	char c;
	int (*f)(va_list p);

} pr;
int _printf(const char *format, ...);
int _putchar(char c);
#endif
