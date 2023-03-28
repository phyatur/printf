#include "main.h"

/**
 * _write_char - a function that writes the character
 *
 * @c: C haracter to print
 *
 * Return: On success 1.
 * -1 on error.
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}
