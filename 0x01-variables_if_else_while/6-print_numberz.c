#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription: A C program that prints the number is positive or negative
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int y = 0;

	while (y < 10)
	{
	putchar(48 + y);
	y++;
	}
	putchar('\n');
	return (0);
}
