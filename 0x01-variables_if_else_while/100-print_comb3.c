#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all possible different combinations
 * for only two digits
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(48 + i);
			putchar(48 + j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
