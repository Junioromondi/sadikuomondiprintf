#include <stdio.h>
#include "main.h"
/**
 *
 *
 * 
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	spec_f str_arr[] = {{"c", print_char}, {"s", print_str}, {"%", print_perc}};

	va_list arg_list;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(arg_list, format);
	printed_chars = parser(format, str_arr, arg_list);
	va_end(arg_list);

	return (printed_chars);

}
