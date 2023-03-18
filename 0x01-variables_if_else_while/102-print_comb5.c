#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)

{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
	for (j = i; j <= 99; j++)
	{
	putchar((i / 10) + '0');
	putchar((i % 10) + '0');
	putchar(' ');
	putchar((j / 10) + '0');
	putchar((j % 10) + '0');
	if (i != 99 || j != 99)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
