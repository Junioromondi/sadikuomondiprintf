#include "main.h"
/**
 * print_char- prints a character
 * @c: character argument
 * Return: 1 or -1
 */

int print_char(va_list list)
{
	_write(va_arg(list, int));
	return (1);
}
/**
 * print_perc- prints percent (%)
 * @list: listh of arguments
 * Return: 1 or -1
 */
int print_perc(__attribute__((unused))va_list list)
{
	_write('%');
	return (1);
}
/**
 * print_str- prints a string
 * @list: argument list
 * @Return: 1 or -1
 */
int print_str(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	for (i = 0; str[i] != '\0'; i++)
	{
		_write(str[i]);
	}
	return (i);
}
