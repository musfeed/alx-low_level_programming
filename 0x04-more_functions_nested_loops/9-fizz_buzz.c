#include <stdio.h>
/**
 * main  -  checks the code
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf(" Fizz");
		else if (i % 5 == 0 && i % 3 != 0)
			printf(" Buzz");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf(" FIzzBuzz");
		else if (i == 1)
			printf("%d", i);
		else
			printf(" %d", i);
	}
	return (0);
}
