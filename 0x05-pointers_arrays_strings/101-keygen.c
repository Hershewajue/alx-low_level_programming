#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <main.h>

#define PASSWORD_LENGTH 12

/**
 * main - Generate a random valid password for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
    int i;
    char password[PASSWORD_LENGTH + 1];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    /* Seed the random number generator with the current time */
    srand(time(NULL));

    /* Generate a random character from the charset for each position in the password */
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int index = rand() % sizeof(charset);
        password[i] = charset[index];
    }

    /* Terminate the password string */
    password[PASSWORD_LENGTH] = '\0';

    /* Print the generated password */
    printf("%s\n", password);

    return (0);
}
