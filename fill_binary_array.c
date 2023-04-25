#include "main.h"

/**
 * fill_binary_array - print binary from a decimal
 * @binary: binary pointer
 * @int_in: input
 * @isneg: if input is negative
 * @limit: binary size
 * Return: printed characters
 */

char *fill_binary_array(char *binary, long int int_in, int isneg, int limit)
{
	int n;

	for (n = 0; n < limit; n++)
		binary[n] = '0';
	binary[limit] = '\0';
	for (n = limit - 1; int_in > 1; n--)
	{
		if (int_in == 2)
			binary[n] = '0';
		else
			binary[n] = (int_in % 2) + '0';
		int_in /= 2;
	}
	if (int_in != 0)
		binary[n] = '1';
	if (isneg)
	{
		for (n = 0; binary[n]; n++)
			if (binary[n] == '0')
				binary[n] = '1';
			else
				binary[n] = '0';
	}
	return (binary);
}
