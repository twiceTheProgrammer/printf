#include "main.h"
#include <unistd.h>

/**
 * _puts - prints string
 * @s: param
 *
 *
 * Return: int
 */

int _puts(char *s)
{
	register int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		_putchar(s[index]);
	}

	return (index);
}
