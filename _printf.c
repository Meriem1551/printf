#include "main.h"
/**
 * _printf - produces output according to a format.
 * Description: This function takes a character string (format)
 * it will display the output according to this format
 * @format: a character string
 * Return: it returns a printed char
 */
int _printf(const char *format, ...)
{
int len;
va_list arg_list;
if (format == NULL)
{
return (-1);
}
len = _strlen(format);//dec
if (size < 0)
{
return (0);
}
va_start(arg_list, format);
len = handler(format, arg_list);//dec
_putchr(-1);//dec
va_end(arg_list);
return( len);
}
