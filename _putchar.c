#include "main.h"

/**
 * _putchar - Writes a single character to the standard output (stdout).
 *
 * This function takes a character as input and writes it to the standard output.
 * It is often used for printing characters, and it returns 1 on success.
 * If an error occurs, it returns -1, and the errno is set accordingly.
 *
 * @c: The character to be printed.
 *
 * Return: On success, 1 is returned; on error, -1 is returned, and the errno is set.
 */

int _putchar(char c)
{
    return (write(1, &c, 1));
}

/**
 * _puts - Prints a null-terminated string to the standard output (stdout).
 *
 * This function takes a pointer to a string and prints each character to the standard
 * output until the null-terminator is reached. It counts and returns the number of
 * characters written to the output stream.
 *
 * @str: A pointer to the string to be printed.
 *
 * Return: The number of characters written to the standard output.
 */
int _puts(char *str)
{
    register short i;

    for (i = 0; str[i]; i++)
        _putchar(str[i]);
    return (i);
}

