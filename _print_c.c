#include "main.h"

/**
* print_c - prints char
* @l: param
*
* @f: param
* Return: int
*/

int print_c(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
