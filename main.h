#ifndef PRINTF
#define PRINTF

typedef struct prf
{
	char c;
	void (*f)(va_list p);

} pr;

#endif
