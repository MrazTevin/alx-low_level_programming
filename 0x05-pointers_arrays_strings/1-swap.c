#include "main.h"

/**
* swap_int - swap value of the integers
* @a: first integer
* @b: second integer
* Return: no return
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}
