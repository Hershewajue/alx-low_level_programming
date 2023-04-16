#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the program
 * @argc: the number of command line arguments
 * @argv: an array of strings containing the command line arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
int num1, num2, result;

/* Check if two arguments were passed */
if (argc != 3)
{
printf("Error\n");
return 1;
}

/* Convert the two argument strings to integers */
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

/* Multiply the two numbers */
result = num1 * num2;

/* Print the result followed by a new line */
printf("%d\n", result);

/* Return 0 to indicate success */
return 0;
}

