#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} ph;

int _printf(const char *format, ...);
int (*get_print(char s))(va_list, flags_t *);
int get_flag(char s, flags_t *f);
int print_s(va_list l, flags_t *f);
int print_c(va_list l, flags_t *f);
int _putchar(char c);
int _puts(char *s);

#endif