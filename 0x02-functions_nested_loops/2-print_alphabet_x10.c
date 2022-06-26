#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times.
 */

void print_alphabet_x10(void)
{
	int alpha_x10;
	int alpha;

	for (alpha_x10 = 0; alpha_x10 <= 9; alpha_x10++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}

}
