#include "main.h"
#include <stdio.h>

/**
 * _abs - a function that computes the absolute value of an integer
 * @x: integer input
 * Return: absolute value of x
 *
 */
int _abs(int x)
{
	if (x < 0)
		x = -x;
	return (x);
}
