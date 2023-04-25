#include "main.h"

/**
* get_print - get related func arg to exec
* @s: param
* Return: int
*/
int (*get_print(char s))(va_list, flags_t *)
{
	ph func_arr[] = {
		{'c', print_c},
		{'s', print_s},
		{'d', print_d},
		{'i', print_d}
	};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}
