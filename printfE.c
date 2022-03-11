#include <stderg.h>
/**
 *
 *
 *
 */
void print_char(va_list c)
{
	char aux;

	aux = va_arg(c, format);

	putchar(aux);
}
/**
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	va_list p;
	char *tmp;
	int i = 0, j = 0, k = 0;


	pr pf_s[] =
       	{
		{"s", print_string}
		{"c", print_char}
		{"%", print_%}
	};

	va_start(p, input);

	for (i = 0; input[i]; i++)

	{	if (input[i] == "%")
		{	
			i++;

			for (j = 0; pf_s[j]; j = 0)
			{
				if (input[i] = pf_s[j].c)
					pf_s[j].f(p);
			}
		}
	}

}
