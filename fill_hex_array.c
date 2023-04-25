#include "main.h"

/**
 * fill_hex_array - write the character c to stdout
 *
 * @bnr: array that stores the binary.
 * @hex: array that stores the hexadecimal.
 * @isupp: integer that determines if 
 * the hexadecimal array is
 * in uppercase or lowercase letter.
 * @limit: size of hex
 * Return: binary array.
 */

char *fill_hex_array(char *bnr, char *hex, int isupp, int limit)
{
	int op, m, n, toletter;

	hex[limit] = '\0';
	if (isupp)
		toletter = 55;
	else
		toletter = 87;
	for (m = (limit * 4) - 1; m >= 0; m--)
	{
		for (op = 0, n = 1; n <= 8; n *= 2, m--)
			op = ((bnr[m] - '0') * n) + op;
		m++;
		if (op < 10)
			hex[m / 4] = op + 48;
		else
			hex[m / 4] = op + toletter;
	}
	return (hex);
}
