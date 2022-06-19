#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Print number between 0 to 9 excluding nos 2 & 4
 *
 * Return: Void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 || i != 4)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
