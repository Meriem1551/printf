#ifndef PROTO_DECLARED
#define PROTO_DECLARED
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int resolve_format(char c, va_list printargs);
int print_string(char *s);
int print_number(int d, int i);
int print_unsigned_number(unsigned int d, int i);
#endif

