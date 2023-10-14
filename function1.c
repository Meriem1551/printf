#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
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
            printf("%d", number); 
            printed_chars++;  
        } else {
            putchar(*format); 
            printed_chars++;
            format++;
        }
    }

    va_end(args);
    return printed_chars;
}

