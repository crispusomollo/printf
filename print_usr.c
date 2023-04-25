#include "main.h"
/**
 * print_usr - print a string and chars
 * 
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: chars printed
 */
 
int print_usr(va_list arguments, char *buf, unsigned int ibuf)
{
	unsigned char *str;
	char *hexadecimal, *binary;
	unsigned int y, sum, op;

	str = va_arg(arguments, unsigned char *);
	binary = malloc(sizeof(char) * (32 + 1));
	hexadecimal = malloc(sizeof(char) * (8 + 1));
	for (sum = y = 0; str[y]; y++)
	{
		if (str[y] < 32 || str[y] >= 127)
		{
			ibuf = handl_buf(buf, '\\', ibuf);
			ibuf = handl_buf(buf, 'x', ibuf);
			op = str[y];
			binary = fill_binary_array(binary, op, 0, 32);
			hexadecimal = fill_hex_array(binary, hexadecimal, 1, 8);
			ibuf = handl_buf(buf, hexadecimal[6], ibuf);
			ibuf = handl_buf(buf, hexadecimal[7], ibuf);
			sum += 3;
		}
		else
			ibuf = handl_buf(buf, str[y], ibuf);
	}
	free(binary);
	free(hexadecimal);
	return (y + sum);
}
