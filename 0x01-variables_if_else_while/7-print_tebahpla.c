#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - print lower case letters in reverse
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);

}
