#include "main.h"
/**
 * factorial - retuns the factorial of a number
 * @n: number to return the factorial from
 * Return: facctorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
