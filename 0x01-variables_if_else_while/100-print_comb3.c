#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num1,num2;
	num1 = 0;
	num2 = 0;

	while(num1 < 10)
	{
		while(num2 < 2)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');
			num1++;
			num2++;

			if (digit1 == 9 && digit2 == 9)
				continue;

			putchar(',',);
			putchar(' ');
		}
	}

	putchar('\n');

	return 0;
}
