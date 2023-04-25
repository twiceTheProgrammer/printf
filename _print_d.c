#include "main.h"

/**
 * print_d - print an integer
 * @l: parameter
 * @f: parameter
 *
 * Return: int
 */
int print_d(va_list l, flags_t *f)
{
	int n = va_arg(l, int);
	int res = count_digit(n);

	if (f->plus == 1 && f->plus == 0 && n >= 0)
		res += _putchar (' ');
	if (f->plus == 1 && n >= 0)
		res += _putchar('+');
	if (n <= 0)
		res++;
	print_n(n);
	return (res);
}
