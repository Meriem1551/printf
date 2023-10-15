#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * cleanup - Perform cleanup operations for _printf.
 * @args: A va_list of arguments provided to _printf.
 * @output: A buffer_t struct.
 */
void cleanup(va_list args, buffer_t *output)
{
    va_end(args);
    write(STDOUT_FILENO, output->start, output->len);
    free_buffer(output);
}

/**
 * run_printf - Read through the format string for _printf.
 * @format: Character string to print - may contain directives.
 * @output: A buffer_t struct containing a buffer.
 * @args: A va_list of arguments.
 *
 * Return: The number of characters stored to output.
 */
int run_printf(const char *format, va_list args, buffer_t *output)
{
    ssize_t i, width, precision, ret = 0;
    char tmp;
    unsigned char flags, length;
    unsigned int (*function)(va_list, buffer_t *,
                             unsigned char, int, int, unsigned char);
    
    for (i = 0; *(format + i); i++)
    {
        length = 0;
        
        if (*(format + i) == '%')
        {
            tmp = 0;
            flags = handle_flags(format + i + 1, &tmp);
            width = handle_width(args, format + i + tmp + 1, &tmp);
            precision = handle_precision(args, format + i + tmp + 1, &tmp);
            length = handle_length(format + i + tmp + 1, &tmp);
            function = handle_specifiers(format + i + tmp + 1);

            if (function != NULL)
            {
                i += tmp + 1;
                ret += function(args, output, flags, width, precision, length);
                continue;
            }
            else if (*(format + i + tmp + 1) == '\0')
            {
                ret = -1;
                break;
            }
        }
        
        ret += _memcpy(output, (format + i), 1);
        i += (length != 0) ? 1 : 0;
    }
    
    cleanup(args, output);
    return (ret);
}

/**
 * _printf - Output a formatted string.
 * @format: Character string to print - may contain directives.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
    buffer_t *output;
    va_list args;
    int ret;
    
    if (format == NULL)
        return (-1);
    
    output = init_buffer();
    
    if (output == NULL)
        return (-1);
    
    va_start(args, format);
    ret = run_printf(format, args, output);
    
    return (ret);
}

