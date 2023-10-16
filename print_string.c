#include "main.h"
/**
 * printf_string - Print a string and return its length.
 *
 * This function takes a string argument, prints the string character by
 * character, and returns the length of the printed string. If the string
 * is NULL, it prints "(null)" and returns its length.
 *
 * @val: The argument containing the string to be printed.
 * Return: The length of the string, or 0 if the string is NULL.
 */
int printf_string(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
