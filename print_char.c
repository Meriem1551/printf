#include "main.h"

/**
 * printf_char - Print a single character.
 *
 * This function takes a character argument, prints it, and returns 1.
 *
 * @val: The character to be printed.
 * Return: Always returns 1.
 */
int printf_char(va_list val)
{
char s;
s = va_arg(val, int);
_putchar(s);
return (1);
}
