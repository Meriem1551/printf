#include "main.h"
/**
 * printf_pointer - Print a hexadecimal memory address.
 *
 * This function takes a pointer argument, converts it to its hexadecimal
 * representation, and prints it as a memory address. It returns the
 * number of characters printed.
 *
 * @val: The argument containing the memory address to be printed.
 * Return: The number of characters printed in the hexadecimal memory address.
 */
int printf_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = printf_hex_aux(a);
	return (b + 2);
}
