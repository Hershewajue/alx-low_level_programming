#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
* main - Prints the result of simple operations.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: Always 0.
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
int num1, num2;
char *op;
if (argc != 4)
{
printf(&quot;Error\n&quot;);
exit(98);
}
num1 = atoi(argv[1]);
op = argv[2];
num2 = atoi(argv[3]);
if (get_op_func(op) == NULL || op[1] != &#39;\0&#39;)
{
printf(&quot;Error\n&quot;);
exit(99);
}
if ((*op == &#39;/&#39; &amp;&amp; num2 == 0) ||
(*op == &#39;%&#39; &amp;&amp; num2 == 0))
{
printf(&quot;Error\n&quot;);
exit(100);
}

printf(&quot;%d\n&quot;, get_op_func(op)(num1, num2));
return (0);
}
