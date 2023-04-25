#include "main.h"

/**
 * print_buf - prints buffer
 * @buf: buffer pointer
 * @nbuf: bytes to print
 * Return: bytes printed.
 */

int print_buf(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}