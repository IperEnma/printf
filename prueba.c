#include <stdio.h>
#include "main.h"
int main()
{
	_printf("hola %c\n", 'c');
	_printf("hola %%\n");

	_printf("hola,string  %s string %c como estas? %c\n", "ALEX", 'c', 'h');

	_printf("hola,string  %s string %c como estas? %c mod %%  mod\n ", "ALEX", 'c', 'h');
}
