#include <stdio.h>
/**
 * main - print alphabet lowercase
 *
 * Description: using the main function
 * this program prints "Program prints alphabet then lowercase"
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
