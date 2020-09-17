#include <stdio.h>

/**
* main - Prints the alphabet in lower case, except 'e' and 'q' letters.
* Return: 0
*/

int main(void)
{
char letra;

for (letra = 'a' ; letra <= 'z' ; letra++)
{
if (letra == 'e' || letra == 'q')
{
continue;
}
else
{
putchar(letra);
}
}
putchar(10);
return (0);
}
