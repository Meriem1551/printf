#include "main.h"

/**
 * _putchar - Writes a character to standard output (stdout).
 *
 * Writes the specified character 'c' to the standard output (stdout).
 *
 * @c: The character to print.
 * Return: 1 on success, -1 on error with errno set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - Prints a null-terminated string to stdout.
 *
 * Prints the characters in the null-terminated
 * and returns the count of characters printed.
 *
 * @str: Pointer to the string to print.
 * Return: The count of characters written to the output stream.
 */
int _puts(char *str)
{
	register short i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	return (i);
}

