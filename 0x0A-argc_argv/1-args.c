#include <stdio.h>

/**
 * main - entry point of the program
 * @argc: the number of command line arguments
 * @argv: an array of strings containing the command line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
/* Print the number of command line arguments (excluding the name of the program) */
printf("%d\n", argc - 1);

/* Return 0 to indicate success */
return (0);
}

