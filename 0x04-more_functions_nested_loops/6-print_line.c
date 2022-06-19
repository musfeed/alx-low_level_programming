#include <stdio.h>
#include "main.h"
/**
 * print_line - prints _
 * @n: number of _ to print
 */

void print_line(int n)
{
	int i;

	for( i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar(10);
}
