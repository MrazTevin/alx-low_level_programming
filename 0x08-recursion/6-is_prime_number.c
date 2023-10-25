#include "main.h"

/**
* is_divisible - Helper function to check if a number is divisible by any
* integer from 2 to the square root of n
* @n: The number to be checked for divisibility
* @divisor: The current divisor to check
*
* Return: 1 if n is divisible by divisor, 0 otherwise
*/
int is_divisible(int n, int divisor)
{
if (divisor <= 1)
{
return (0); /*  Base case: If divisor is 1 or less, n is not prime */
}
if (n % divisor == 0)
{
return (1); /*  n is divisible by divisor, not a prime number */
}
return (is_divisible(n, divisor - 1)); /*Check with the next smaller divisor */
}

/**
* is_prime_number - Checks if a number is a prime number
* @n: The input integer
*
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0); /*  0 and 1 are not prime numbers */
}
return (!is_divisible(n, n - 1));
/*Return 1 if not divisible by any number from n - 1 to 2 */
}

