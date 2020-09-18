#include <stdio.h>

/**
* main - Print the numbers of 00 to 99.
* Return: 0
*/

int main(void)
{
int num1, num2;
for (num1 = 48 ; num1 < 58 ; num1++)
{
num2 = 49 + (num1 - 48);
for (; num2 < 58 ; num2++)
{
putchar(num1);
putchar(num2);
if (num1 == 56 && num2 == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar(10);
return (0);
}
