#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int _printf(const char *format, ...);
int _write(char c);

typedef struct spec
{
	char *spec;
	int (*f)(va_list);
} spec_f;

int print_char(va_list list);
int print_perc(__attribute__((unused))va_list list);
int print_str(va_list list);

#endif
