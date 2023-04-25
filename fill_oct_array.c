#include "main.h"

/**
 * fill_oct_array - write character c to stdout
 *
 * @bnr: array to store the binary.
 * @oct: array to store the octal.
 *
 * Return: binary array.
 */

char *fill_oct_array(char *bnr, char *oct)
{
	int op, m, n, ioct, limit;

	oct[11] = '\0';
	for (m = 31, ioct = 10; m >= 0; m--, ioct--)
	{
		if (m > 1)
			limit = 4;
		else
			limit = 2;
		for (op = 0, n = 1; n <= limit; n *= 2, m--)
			op = ((bnr[m] - '0') * n) + op;
		m++;
		oct[ioct] = op + '0';
	}
	return (oct);
}
