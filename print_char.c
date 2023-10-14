#include "main.h"
/**
 * print_char - print char.
 * @list_arg: va_list.
 *
 * Return: 1
 */
int print_char(va_list arg_list)
{
int arg;
arg = va_arg(arg_list, int);
_putchar(arg);
return (1);
}
