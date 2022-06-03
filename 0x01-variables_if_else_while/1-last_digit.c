#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	lastdigit = n % 10;
	printf("Last digit of %d is %d ", n, lastdigit);
	if (lastdigit > 5)
	{
		printf("and is greater than 5");
	}
	else if (lastdigit < 6 && lastdigit != 0)
		printf("and is less than 6 and not 0");
	else
		printf("and is 0");
	return (0);
}
