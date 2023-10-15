#include "main.h"
#include <unistd.h>

/**
 * _printf - Our custom printf function.
 * @format: The format string to print.
 * @...: Variable number of arguments.
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
    va_list args;
    int printed_chars = 0;
    int i = 0;

    va_start(args, format);

    if (format == NULL)
        return (-1);

    while (format && format[i])
    {
        if (format[i] != '%')
        {
            write(1, &format[i], 1);
            printed_chars++;
        }
        else
        {
            i++;
            if (format[i] == 'c')
            {
                char c = va_arg(args, int);
                write(1, &c, 1);
                printed_chars++;
            }
            else if (format[i] == 's')
            {
                char *str = va_arg(args, char *);
                write(1, str, strlen(str));
                printed_chars += strlen(str);
            }
            else if (format[i] == '%')
            {
                write(1, "%", 1);
                printed_chars++;
            }
        }
        i++;
    }

    va_end(args);

    return (printed_chars);
}

