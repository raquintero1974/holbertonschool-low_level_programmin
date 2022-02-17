#include <stdio.h>

/**
  * main - This program prints the base 10 numbers, followed by a new line.
  *
  * Return: Always (Success)
  */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}

