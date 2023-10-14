#include "main.h"
/**
 * _strlen - Calculate the length of a string
 * @str:a pointer to a string
 *
 * Return: Length of the given string
 **/
int _strlen(const char *str)
{
int i;
for (i = 0; str[i] != 0; i++)
{		
;
}
return (i);
}

/**
 * print - print char.
 * @str: a pointer to a string.
 *
 * Return: Length of the given string.
 */

int print(char *str)
{
int i;
for (i = 0; str[i] != '\0'; ++i)
{
_putchar(str[i]);
}
return (i);
}
