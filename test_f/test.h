#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

typedef struct spec
{
	char *sym;
	int (*f)(va_list);
} spec_f;


int parser(const char *format, spec_f str_arg[], va_list arg_list);
int _printf(const char *format, ...);
int _write(char c);
int print_char(va_list list);
int print_perc(__attribute__((unused))va_list list);
int print_str(va_list list);

#endif
