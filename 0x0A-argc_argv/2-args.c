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
(void)argv;
int i;

/* Loop through all command line arguments */
for (i = 0; i < argc; i++)
{
/* Print the current argument followed by a new line */
printf("%s\n", argv[i]);
}

/* Return 0 to indicate success */
return 0;
}

