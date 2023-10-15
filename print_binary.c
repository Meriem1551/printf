#include "main.h"
/**
 * printf_bin - Prints the binary representation of an unsigned integer.
 * @val: List of arguments.
 *
 * Return: The number of characters printed.
 */
int print_binary(va_list val)
{
    int flag = 0;
    int char_count = 0;
    int i, bit, binary_bit;
    unsigned int number = va_arg(val, unsigned int);
    unsigned int mask;

    for (i = 0; i < 32; i++) {
        mask = 1 << (31 - i);
        bit = (mask & number) >> (31 - i);

        if (bit == 1 && flag == 0) {
            flag = 1;
        }

        if (flag == 1) {
            binary_bit = bit;
            _putchar(binary_bit + '0');
            char_count++;
        }
    }

    if (char_count == 0) {
        char_count++;
        _putchar('0');
    }

    return char_count;
}
