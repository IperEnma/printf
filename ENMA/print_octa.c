#include "main.h"
/**
 * print_octa - decimal to octa
 * @o: valist
 * Return:  ret
 */
int print_octa(va_list o)
{
	unsigned int octal[11];
	unsigned int i, m, n;
	int ret;

	n = va_arg(o, unsigned int);
	m = 1073741824;
	octal[0] = n / m;
	for (i = 1; i < 11; i++)
	{
		m /= 8;
		octal[i] = (n / m) % 8;
	}
	for (i = 0, ret = 0; i < 11; i++)
	{
		_putchar(octal[i] + 48);
		ret++;
	}
	return (ret);
}
