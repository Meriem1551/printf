#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct format - struct
 * @id: char
 * @f: int
 * Return: nothing
 */

typedef struct format
{
	char *id;
	int (*f)();
} match;

int _printf(const char *format, ...);
int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(const char *str);
int _strleng(char *str);
int print_37(void);
int printf_dec(va_list args);
int printf_int(va_list args);
int print_binary(va_list val);
int print_rot13(va_list val);
int printf_unsigned_int(va_list args);
int print_oct(va_list val);
int print_hextra(unsigned long int num);
int print_hex(va_list val);
int print_STRING(va_list val);
int PRINT_HEX(va_list val);
int print_HEXtra(unsigned int num);
int print_pointer(va_list val);
int print_rev(va_list val);
int handle_flags(int n, char *flags);
#endif
