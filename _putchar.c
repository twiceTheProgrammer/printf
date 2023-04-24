#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints char 
 * @c: param
 *
 * 
 * Return: int 
 */
int _putchar(char c)
{
    static char buffer[1024];
    static int index;

    if (c == -1 || index >= 1024)
    {
        write(1, &buffer, index);
        index = 0;
    }

    if (c != -1)
    {
        buffer[index] = c;
        index++;
    }

    return (1);
}