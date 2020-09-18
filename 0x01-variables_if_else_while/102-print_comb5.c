#include <stdio.h>

/**
* main -  Print all possible combinations of two two-digit numbers.
* Return: 0
*/

int main(void)
{
int n1, n2, n3, n4;
for (n1 = '0'; n1 <= '9'; n1++)
{
for (n2 = '0'; n2 <= '9'; n2++)
{
for (n3 = n1; n3 <= '9'; n3++)
{
if (n3 == n1)
{
n4 = n2 + 1;
}
else
{
n4 = '0';
}
for (n4 = n4; n4 <= '9'; n4++)
{
putchar(n1);
putchar(n2);
putchar(' ');
putchar(n3);
putchar(n4);
if (!(n1 == '9' && n2 == '8' && n3 == '9' && n4 == '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar(10);
return (0);
}
