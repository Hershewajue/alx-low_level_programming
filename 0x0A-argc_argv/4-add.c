#include <stdio.h>
#include <stdlib.h>
/**

 * Adds positive numbers passed as arguments to the program
 * and prints the result followed by a new line.
 * If no number is passed, prints 0 followed by a new line.
 * If any of the numbers contain non-digit symbols, prints Error
 * followed by a new line and returns 1.
 * @param argc The number of arguments passed to the program
 * @param argv An array of strings containing the arguments
 * Return 0 on success, 1 on error
 */

int main(int argc, char **argv)
{
int i, n, sum = 0;
char *flag;

if (argc < 2)
{
printf("0\n");
return (0);

}

for (i = 1; argv[i]; i++)
{
n = strtol(argv[i], &flag, 10);
if (*flag)
{
printf("Error\n");
return (1);
}
else
{
sum += n;
}
}
printf("%d\n", sum);

return (0);
}
