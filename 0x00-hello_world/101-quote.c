#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * Main - Preints a string without using Printf fuction
 * Return: always return 0 (Success)
 */

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
