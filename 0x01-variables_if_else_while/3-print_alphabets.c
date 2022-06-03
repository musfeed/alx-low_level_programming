#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 **/
int main(void)
{
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	char beta[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	for (j = 0; j < 26; j++)
	{
		putchar(beta[j]);
	}
	putchar('\n');
	return (0);
}
