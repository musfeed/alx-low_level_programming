#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 **/
int main(void)
{
	int i;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		if (alpha[i] != 'q' || alpha[i] != 'e')
		{
			putchar(alpha[i]);
		}
		else
			break;

	}
	putchar('\n');
	return (0);
}
