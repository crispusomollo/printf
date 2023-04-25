#include "main.h"

/**
 * fill_long_oct_array - calculates a long octal number
 *
 * @bnr: array where is stored the binary.
 * @oct: array where is stored the octal.
 *
 * Return: binary array.
 */

char *fill_long_oct_array(char *bnr, char *oct)
{
	int op, m, n, ioct, limit;

	oct[22] = '\0';
	for (m = 63, ioct = 21; m >= 0; m--, ioct--)
	{
		if (m > 0)
			limit = 4;
		else
			limit = 1;
		for (op = 0, n = 1; n <= limit; n *= 2, m--)
			op = ((bnr[m] - '0') * n) + op;
		m++;
		oct[ioct] = op + '0';
	}
	return (oct);
}
