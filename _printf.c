#include "main.h"

/**
 * _printf - a function that print a formated string
 *
 * @format: String containing all the  characters
 *
 * Return: count of the characters printed
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	conv f_list[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_per},
		{"d", print_int},
		{"i", print_int},
		{"b", print_bi},
		{"r", print_reve},
		{"R", rot13},
		{"u", unsigned_int},
		{"o", print_oct},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
