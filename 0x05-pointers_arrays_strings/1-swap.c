#include <stdio.h>
#include "main.h"

/**
 * swap_int - the function that swaps the values
 *
 * @ab: The parameters to swap
 **/
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
