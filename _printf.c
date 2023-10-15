#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>

/**
 * _printf - print variable length of arguments with certain format
 * @format: print format
 * @...: variable length of printable arguments
 *
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0, isSpecial = 0, temp;
	va_list printargs;
	char pChar, tempChar;

	va_start(printargs, format);
	while (format[i] != '\0')
	{
		tempChar = format[i];
		if (!isSpecial && tempChar == '\\')
		{
			isSpecial = 1;
			continue;
		}

		if (isSpecial)
		{
			pChar = tempChar == '\\' ? '\\' : tempChar == 'n' ? '\n' : tempChar == 't' ? '\t' : 0;
			if (pChar == 0)
			{
				_putchar('\\');
				_putchar(tempChar);
			} else
			{
				_putchar(pChar);
			}
			isSpecial = 0;
		}
		if (tempChar == '%')
		{
			temp = resolve_format(format[i + 1], printargs);
			if (temp <= 0)
				return (-1);
			count += temp;
			i += 2;
		} else
		{
			_putchar(tempChar);
			i++;
			count++;
		}
	}

	return (count);
}

/**
 * resolve_format - check format and print values
 * @c: character to check
 * @printargs: variable arguments to print
 *
 * Return: number of printed characters
 */
int resolve_format(char c, va_list printargs)
{
	int i = 0;

	if (c == '%')
	{
		_putchar(c);
		i++;
	} else if (c == 'c')
	{
		_putchar(va_arg(printargs, int));
		i++;
	} else if (c == 's')
	{
		i = print_string(va_arg(printargs, char *));
	} else if (c == 'd' || c == 'i')
	{
		i = print_number(va_arg(printargs, int), 0);
	} else if (c == 'u')
	{
		i = print_unsigned_number(va_arg(printargs, unsigned int), 0);
	} else
	{
		_putchar('%');
		_putchar(c);
		i += 2;
	}

	return (i);
}

/**
 * print_string - print string characters
 * @s: character pointer to print
 *
 * Return: number of printed characters
 */
int print_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * print_number - print numbers
 * @d: number to print
 * @i: chrrent printed count
 *
 * Return: number of printed number characters
 */
int print_number(int d, int i)
{
	if (d < 0)
	{
		_putchar('-');
		d = d * -1;
		i++;
	}

	if (d > 0)
	{
		i++;
		print_number(d / 10, i);
		_putchar('0' + d % 10);
	}
	return (i);
}

/**
 * print_unsigned_number - prints unsigned numbers
 * @d: number to print
 * @i: current printed count
 *
 * Return: printed count
 */
int print_unsigned_number(unsigned int d, int i)
{
	if (d > 0)
	{
		i++;
		print_number(d / 10, i);
		_putchar('0' + d % 10);
	}

	return (i);
}

