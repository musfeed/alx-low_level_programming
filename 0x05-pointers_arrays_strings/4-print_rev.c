#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 *
 * @s: the string to be reversed
 **/
void print_rev(char *s)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		
	}
	i -= 1;
	while( i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
