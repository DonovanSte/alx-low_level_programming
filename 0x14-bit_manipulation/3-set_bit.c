#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1
 * @n: A pointer to the unsigned long int to modify
 * @index: The index of the bit to set, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8) /* Check if index is valid */
		return (-1);

	*n |= 1UL << index; /* Set the bit at the given index to 1 */

	return (1);
}
