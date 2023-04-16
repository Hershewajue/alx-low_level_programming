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
(void)argc;
/* Print the name of the program (first argument in argv) followed by a newline */
printf("%s\n", argv[0]);

/* Return 0 to indicate success */
return 0;
}
