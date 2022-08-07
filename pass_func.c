#include "main.h"
/**
 * parser- Receives the main string and all the necessary parameters to
 * print a formated string.
 * @format: A string containing all the desired characters.
 * @str_arr: A list of all the posible functions
 * @arg_list: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */
int parser(const char *format, spec_f str_arr[], va_list arg_list)
{
	int i, j, r_val, printed_chars;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; str_arr[j].sym != NULL; j++)
			{
				if (format[i + 1] == str_arr[j].sym[0])
				{
					r_val = str_arr[j].f(arg_list);
					if (r_val == -1)
					{
						return (-1);
					}
					printed_chars += r_val;
					break;
				}
			}
			i = i + 1;
		}
		else
		{
			_write(format[i]);
			printed_chars++;
		}
	}
	return (printed_chars);
}
