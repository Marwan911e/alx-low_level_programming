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
	int tens1, ones1, tens2, ones2;

	for (tens1 = 0; tens1 < 10; tens1++)
	{
		for (ones1 = 0; ones1 < 10; ones1++)
		{
			for (tens2 = tens1; tens2 < 10; tens2++)
			{
				int start_ones2 = (tens1 == tens2) ? ones1 + 1 : 0;

				for (ones2 = start_ones2; ones2 < 10; ones2++)
				{
					putchar('0' + tens1);
					putchar('0' + ones1);
					putchar(' ');
					putchar('0' + tens2);
					putchar('0' + ones2);
					if (tens1 != 9 || ones1 != 8 || tens2 != 9 || ones2 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}
