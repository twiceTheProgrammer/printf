#include "main.h"

int print_s(va_list l, flags_t *f)
{
    char *s = va_arg(l, char *);

    (void)f;

    if (!s)
    {
        s = "(null)";
    }

    return (_puts(s));
}