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
	int i;

	for (i = 97; i < 123; i++)
	{
	if (i == 101 || i == 113)
		continue;
	else
		putchar(i);
	}
	return (0);
}
