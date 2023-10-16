#include "main.h"
/**
 * printf_srev - Custom printf function to print a string in reverse.
 * @args: A va_list containing the variadic arguments.
 *
 * This function takes a string and prints its characters in reverse order.
 * If the input string is NULL, it prints the string "(null)".
 *
 * Return: The number of characters printed, including the null terminator.
 */
int printf_srev(va_list args)
{

	char *s = va_arg(args, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
