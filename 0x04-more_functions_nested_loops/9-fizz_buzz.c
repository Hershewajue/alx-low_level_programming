#include "main.h"
#include <stdio.h>
/**
* fizz_buzz - prints numbers 1 to 100, replacing multiples of 3 with "Fizz",
* multiples of 5 with "Buzz", and multiples of both 3 and 5 with "FizzBuzz"
*/
void fizz_buzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
if (i != 100)
{
printf(" ");
}
}
printf("\n");
}
/**
* main - entry point
*
* Return: Always 0
*/
int main(void)
{
fizz_buzz();
return (0);
}
