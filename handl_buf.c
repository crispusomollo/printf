#include "main.h"

/**
 * handl_buf - concatenate the buffer chars
 * @buf: pointer to the buffer
 * @c: character to concatenate
 * @ibuf: index of the buffer pointer
 * Return: index of the buffer pointer.
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
