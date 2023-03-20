#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int low;
	char high;

	for (low = 0; low <= 9; low++)
	{
		putchar(low + '0');
	}

	for (high = 'a'; high <= 'f'; high++)
		putchar(high);

	putchar('\n');
	return (0);
}
