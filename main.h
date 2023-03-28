#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert - a structure for functions and symbols
*
* @symb: operator
* @func: The function associated
*/

struct convert
{
	char *symb;
	int (*func)(va_list);
};
typedef struct convert conv;

int parser(const char *format, conv f_list[], va_list arg_list);

int _printf(const char *format, ...);

int _write_char(char);

int print_char(va_list);

int print_str(va_list);

int print_per(va_list);

int print_int(va_list);

int print_num(va_list);

int print_bi(va_list);

int print_reve(va_list arg);

int rot13(va_list);

int unsigned_int(va_list);

int print_oct(va_list list);

int print_hex(va_list list);

int print_heX(va_list list);

unsigned int base_len(unsigned int, int);

char *rev_string(char *);

void write_base(char *str);

char *_memcpy(char *dest, char *src, unsigned int n);

int print_unsgined_number(unsigned int);

#endif
