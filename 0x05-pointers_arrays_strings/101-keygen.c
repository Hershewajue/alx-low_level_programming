#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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
    const char correct_password[] = "elfhgcwaql";

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

    /* Check if the generated password matches the correct password */
    if (strcmp(password, correct_password) == 0)
    {
        printf("Tada! Congrats\n");
    }
    else
    {
        printf("Wrong password\n");
    }

    return (0);
}
