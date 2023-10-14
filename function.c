#include "main.h"

/**
 * convert - Converts an integer to a string in a specified base
 * @num: The input integer to convert
 * @base: The base for conversion (e.g., decimal, binary, octal)
 * @lowercase: A flag indicating whether letters should be lowercase
 *
 * Return: The resulting string
 */
char *convert(unsigned int num, int base, int lowercase)
{
    static char *rep;
    static char buffer[50];
    char *ptr;

    rep = (lowercase)
        ? "0123456789abcdefghijklmnopqrstuvwxyz"
        : "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    ptr = &buffer[49];
    *ptr = '\0';

    do {
        *--ptr = rep[num % base];
        num /= base;
    } while (num != 0);

    return ptr;
}

