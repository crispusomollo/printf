#include "main.h"
#include <stdio.h>

/**
 * print_add - prints address of the input variable
 * @arguments: input address
 * @buf: buffer pointer
 * @ibuf: index of buffer pointer
 *
 * Return: printed chars
 */

int print_add(va_list arguments, char *buf, unsigned int ibuf)
{
	void *add;
	long int int_input;
	int x, count, first_digit, isnegative;
	char *hexadecimal, *binary;
	char nill[] = "(nil)";

	add = (va_arg(arguments, void *));
	if (add == NULL)
	{
		for (x = 0; nill[x]; x++)
			ibuf = handl_buf(buf, nill[x], ibuf);
		return (5);
	}

	int_input = (intptr_t)add;
	isnegative = 0;
	if (int_input < 0)
	{
		int_input = (int_input * -1) - 1;
		isnegative = 1;
	}

	binary = malloc(sizeof(char) * (64 + 1));
	binary = fill_binary_array(binary, int_input, isnegative, 64);
	hexadecimal = malloc(sizeof(char) * (16 + 1));
	hexadecimal = fill_hex_array(binary, hexadecimal, 0, 16);
	ibuf = handl_buf(buf, '0', ibuf);
	ibuf = handl_buf(buf, 'x', ibuf);
	for (first_digit = x = count = 0; hexadecimal[x]; x++)
	{
		if (hexadecimal[x] != '0' && first_digit == 0)
			first_digit = 1;
		if (first_digit)
		{
			ibuf = handl_buf(buf, hexadecimal[x], ibuf);
			count++;
		}
	}
	free(binary);
	free(hexadecimal);
	return (count + 2);
}
