#include "main.h"

/**
 * print_binary - function to use in binary conversion
 * @val: argument passed
 * Return: integer
 */

int print_binary(va_list val)
{
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int m;
	int count = 0;
	int flag = 0;

	for (i = 0; i < 32; i++)
	{
		m = ((a << (32 - i)) & num);
		if (m >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = m >> (31 - i);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
