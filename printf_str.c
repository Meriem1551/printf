#include "main.h"
/**
 * _strlen - Calculate the length of a string.
 *
 * @s: The string to calculate the length of.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}
/**
 * _strlenc - Calculate the length of a constant string.
 *
 * @s: The constant string to calculate the length of.
 * Return: The length of the constant string.
 */
int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
