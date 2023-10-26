#include "main.h"

/**
* find_sqrt - Helper function to find the natural square root using recursion
* @n: The number to find the square root of
* @guess: The current guess for the square root
*
* Return: The natural square root of n, or -1 if no natural square root exists
*/
int find_sqrt(int n, int guess)
{
if (guess * guess == n)
{
/* base case: the square root of guess equals n */
return (guess);
}
if (guess * guess > n)
{
/* base case: no natural square root if guess exceeds n */
return (-1);
}
return (find_sqrt(n, guess + 1)); /* Recursive call: try the next guess */
}

/**
* _sqrt_recursion - Returns the natural square root of a number
* @n: The input number
*
* Return: The natural square root of n,
* or -1 if n doesn't have a natural square root
*/
int _sqrt_recursion(int n)
{
return (find_sqrt(n, 1)); /* Start with a guess of 1 */
}

