#include "main.h"

/**
 * _isalpha - check if character is lowercase or uppercase alphabet
 * @c: letter being tested
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
