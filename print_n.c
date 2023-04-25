#include "main.h"

/**
 * print_n - helper func
 * @n: pamar
 */
void print_n(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;

	if (n1 / 10)
		print_n(n1 / 10);
	_putchar((n1 % 10) + '0');
}
