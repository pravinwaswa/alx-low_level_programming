#include <stdio.h>
/**
 * main - print  lowercase then uppercase
 *
 * Description: using the main function
 * this program prints "Program prints lowercase then uppercase"
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
