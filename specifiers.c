#include "main.h"

/**
 * print_char - a function that prints character
 *
 * @list: list of arguments
 *
 * Return: the amount of characters printed.
 */

int print_char(va_list list)
{
	_write_char(va_arg(list, int));
	return (1);
}

/**
 * print_str - a function that prints a string
 *
 * @list: list of arguments
 *
 * Return: the amount of characters printed.
 */

int print_str(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_write_char(str[i]);
	return (i);
}

/**
 * print_per - a funtion that prints a percent symbol
 *
 * @list: list of arguments
 *
 * Return: the amount of characters printed.
 */

int print_per(__attribute__((unused))va_list list)
{
	_write_char('%');
	return (1);
}

/**
 * print_int - a function that prints an integer
 *
 * @list: list of arguments
 *
 * Return: the amount of characters printed.
 */

int print_int(va_list list)
{
	int num_length;

	num_length = print_num(list);
	return (num_length);
}

/**
 * unsigned_int - a function that prints unsigned integers
 *
 * @list: list of argumets
 *
 * Return: a count of the numbers
 */

int unsigned_int(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsgined_number(num));

	if (num < 1)
		return (-1);
	return (print_unsgined_number(num));
}
