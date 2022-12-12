#include "main.h"
/**
 * _abs - value of an integer
 * Description: computes the absolute
 * value of an int
 * @hd: integer type
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
