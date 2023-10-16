#include "main.h"

/**
 * handle_buffer - Concatenates characters to the buffer
 *
 * This function appends the given character to a buffer and updates the buffer's
 * index. It is typically used for building strings or sequences of characters.
 *
 * @param buf: A pointer to the buffer where the character should be added.
 * @param c: The character to concatenate to the buffer.
 * @param ibuf: The current index of the buffer pointer.
 * @return: The updated index of the buffer pointer.
 */

unsigned int handl_buf(char *buf, char c, unsigned int ibuf)
{
        if (ibuf == 1024)
        {
                print_buf(buf, ibuf);
                ibuf = 0;
        }
        buf[ibuf] = c;
        ibuf++;
        return (ibuf);
}

