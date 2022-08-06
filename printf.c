#include <stdio.h>
#include "main.h"
/**
 *
 *
 * 
 */
int _printf(const char *format, ...)
{
	va_list list;

	spec_f str_arr[] = {{"c", print_char(list)}, {"s", print_str(list)}, {"%", print_perc(list)}};

	va_start(list, format);

}
