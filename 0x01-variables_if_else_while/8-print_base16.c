#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp = 'a';
char i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
while (alp <= 'f')
{
putchar(alp);
alp++;
}
putchar('\n');
return (0);
}
