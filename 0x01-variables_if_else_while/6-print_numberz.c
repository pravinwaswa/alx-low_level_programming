#include <stdio.h>
/**
 * main - print numbers
 *
 * Description: using the main function
 * this program prints "numbers"
 * Return: 0
 */
int main(void)
{
int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
