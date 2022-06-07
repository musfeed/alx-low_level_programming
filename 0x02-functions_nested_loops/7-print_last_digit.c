#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to print its last digit
 * Return: returns 0 or 1
 **/

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = (-1 * (n % 10));
		_putchar (last + '0');
		return (last);
	}
	else
	{
		last = (n % 10);
		_putchar (last + '0');
		return (last);
	}
}
