#include "main.h"
/**
 * _write- writes a character
 * @c: character argument
 * Return: 1 on success and -1 on error
 */

int _write(char c)
{
	return (write(1, &c, 1));
}
