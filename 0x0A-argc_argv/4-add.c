#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**

 * Adds positive numbers passed as arguments to the program
 * and prints the result followed by a new line.
 * If no number is passed, prints 0 followed by a new line.
 * If any of the numbers contain non-digit symbols, prints Error
 * followed by a new line and returns 1.
 * @param argc The number of arguments passed to the program
 * @param argv An array of strings containing the arguments
 * @return 0 on success, 1 on error
 */

int main(int argc, char **argv)
{
int sum = 0;

if (argc == 1)
{
printf("%d\n", sum);
return 0;
}

for (int i = 1; i < argc; i++)
{
char *arg = argv[i];
int j = 0;
while (arg[j])
{
if (!isdigit(arg[j]))
{
printf("Error\n");
return 1;
}
j++;
}
sum += atoi(arg);
}

printf("%d\n", sum);
return (0);
}
