#include "main.h"


/**
 * flip_bits - Returns the number of bits you would need to flip to get
 *             from one number to another.
 * @n: The first unsigned long int.
 * @m: The second unsigned long int.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	/* XOR the two numbers to get the bit difference */
	unsigned long int diff = n ^ m;

	while (diff != 0)
	{
		count += (diff & 1); /* Check the least significant bit */
		diff >>= 1; /* Shift diff right by 1 bit */
	}

	return (count);
}
