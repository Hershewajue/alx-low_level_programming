#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp;
for (alp = 'a'; alp <= 'z'; alp++)
{
putchar(alp);
}
for (alp = 'A'; alp <= 'Z'; alp++)
{
putchar(alp);
}
putchar('\n');
return (0);
}
