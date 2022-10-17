#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h> /* moved from _printf.c */
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
/**
 * struct id_function - structure of functions and id
 * @id: identifiers of conversion
 * @f:function pointer of id
 */
typedef struct id_function
{
	char id;
	int (*f)();
} format_func;
int _printf(const char *format, ...);
int _putchar(char c);
int _print_c(va_list flist);
int _print_s(va_list flist);
int _print_d(va_list flist);
int _print_b(va_list flist);
int _print_o(va_list flist);
int _print_u(va_list flist);
int _print_x(va_list flist);
char exchange_x(unsigned int n);
int _print_X(va_list flist);
char exchange_X(unsigned int n);
#endif /* _MAIN_H_ */
