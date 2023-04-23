#include <unistd.h>

/**
 * _putchar - writes chars to stdout stream
 * @c: char to send to output stream
 *
 * Return: int 
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
