#include <stdio.h>
#include "main.h"

/**
 * more_numbers: print 0 to 14 ten times
 */

void more_numbers(void)
{
	int i, j, a;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			a = j;
			if (j > 9)
			{
				a = j % 10;
				_putchar('1');

			}
			_putchar(a + '0');
		}
		_putchar(10);
	}
}
