#include "main.h"

/**
 * _printf - Custom printf function for 'd' and 'i' specifiers
 * @format: Format string
 * @...: Variable number of arguments
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);
    int printed_chars = 0;

    while (*format) {
        if (*format == '%' && (format[1] == 'd' || format[1] == 'i')) {
            format += 2;  
            int number = va_arg(args, int);
            printed_chars += printf("%d", number);
        } else {
            putchar(*format);  
            printed_chars++;
            format++;
        }
    }

    va_end(args);
    return printed_chars;
}

