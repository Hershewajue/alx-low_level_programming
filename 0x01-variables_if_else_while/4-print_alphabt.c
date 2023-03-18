#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp = 'a';
while (alp <= 'z')
{
if (alp == 'e' || alp == 'q')
{
alp++;
}
putchar(alp);
alp++;
}
putchar('\n');
return (0);
}
