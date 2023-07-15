#include <stdio.h>

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
	if (i == 101)
		continue;
	else if (i == 113)
		continue;
	else
		putchar(i);
	}
	return (0);
}
