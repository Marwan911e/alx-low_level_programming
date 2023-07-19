#include "main.h"
#include <stdio.h>

/**
 * print_to_98 -  check the n and print integers from n to 98
 * including n and 98
 *
 * @n: check the input of function
*/
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
	for (i = n; i < 98; i++)
	{
	printf("%d, ", i);
	}
	}
	else if (n > 98)
	{
	for (i = n; i > 98; i--)
	{
	printf("%d, ", i);
	}
	}
	printf("98\n");
}
