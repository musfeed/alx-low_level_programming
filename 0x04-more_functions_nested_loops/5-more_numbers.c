#include <stdio.h>
#include "main.h"

/**
 * more_numbers: print 0 to 14 ten times
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			_putchar(j);
		}
		for (k = 48; k <= 52; k++)
		{
			_putchar(49);
			_putchar(k);
		}
		_putchar(10);
	}
}
