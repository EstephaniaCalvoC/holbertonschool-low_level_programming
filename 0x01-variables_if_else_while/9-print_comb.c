#include <stdio.h>

/**
* main - Prints the all combinations of single numbers.
* Return: 0
*/

int main(void)
{
int num;

for (num = 48 ; num < 58 ; num++)
{
putchar(num);
if (num < 57)
{
putchar(',');
putchar(' ');
}
}
putchar(10);
return (0);
}
