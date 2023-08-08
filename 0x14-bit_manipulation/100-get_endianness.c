#include "main.h"

/**
 * get_endianness - functions that check the endianness
 * void: nothing
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int a;
	char *endian;

	var = 1;
	endian = (char *)&a;

	return ((endian == 1) ? 1 : 0);
}
