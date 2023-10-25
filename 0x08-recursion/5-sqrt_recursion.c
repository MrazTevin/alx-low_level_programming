#include "main.h"

/**
* _pow_recursion - Returns the value of x raised to the power of y
* @x: The base number
* @y: The exponent
*
* Return: Result of x^y, or -1 if y is lower than 0
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1); /* Return -1 to indicate an error if y is lower than 0 */
}
if (y == 0)
{
return (1); /* x^0 is always 1 */
}
return (x * _pow_recursion(x, y - 1)); /* Recursive call to calculate x^y */
}

