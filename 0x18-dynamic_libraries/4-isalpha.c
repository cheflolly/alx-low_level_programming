#include "main.h"
/**
 * _isalpha - alpha
 * Description: checks for alphabetic characters
 * @c: type int character
 * Return: 1 if alphabet,  otherwise
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
return (1);
else
return (0);
}
