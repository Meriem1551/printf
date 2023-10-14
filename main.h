#ifndef _MAIN_H_
#define _MAIN_H_
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _strlen(char *s);
int _putchar(char c);
int handler(const char *str, va_list list);
int percent_handler(const char * str, va_list list, int *i);
int print(char *);
char *itoa(long int, int);
int print_string(va_list);
int print_char(va_list);
int print_integer(va_list);
int print_binary(va_list);
int print_rot(va_list);
int print_unsigned(va_list);
int print_octal(va_list);
int print_hexadecimal_low(va_list);
int print_hexadecimal_upp(va_list);
int print_pointer(va_list);
int print_rev_string(va_list);
/**
 * struct _format - Typefed struct
 *
 * @type : format
 * @f: function
 */
typedef struct _format
{
char type;
int (*f)(va_list);
} format;

#endif

