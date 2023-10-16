#include "main.h"

/**
 * handle_buffer - Appends a character to a buffer and updates its index.
 *
 * @buf: Pointer to the buffer.
 * @c: Character to be added to the buffer.
 * @ibuf: Current index of the buffer.
 *
 * Return: Updated index of the buffer.
 */
unsigned int handle_buffer(char *buf, char c, unsigned int ibuf)
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
