#include "main.h"

/**
 * fill_short_oct_array - calculate short octal
 *
 * @bnr: array to  store the binary.
 * @oct: array to store the octal.
 *
 * Return: binary array.
 */

char *fill_short_oct_array(char *bnr, char *oct)
{
	int op, m, n, ioct, limit;

	oct[6] = '\0';
	for (m = 15, ioct = 5; m >= 0; m--, ioct--)
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
