#include <stdio.h>
#include <stdarg.h>

/**
 * custom_printf - Custom printf function
 * @format: Format string
 * @...: Variable number of arguments
 *
 * Return: Number of characters printed
 */
int custom_printf(const char *format, ...) {
    va_list args;
    va_start(args, format);
    int printed_chars = 0;

    while (*format) {
        if (*format == '%' && (format[1] == 'd' || format[1] == 'i')) {
            format += 2;  // Move past the specifier
            int number = va_arg(args, int);
            printf("%d", number);  // Print the integer
            printed_chars++;  // Count the printed characters
        } else {
            putchar(*format);  // Print non-specifier characters
            printed_chars++;
            format++;
        }
    }

    va_end(args);
    return printed_chars;
}

int main(void) {
    int num1 = 42;
    int num2 = -123;

    int printed_chars = custom_printf("This is a number: %d, and another: %i\n", num1, num2);
    printf("\nTotal characters printed: %d\n", printed_chars);

    return 0;
}

