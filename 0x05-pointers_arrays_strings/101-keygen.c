#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char* password_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=[]{}\\|;:'\",./<>?";

    char* password = malloc((length + 1) * sizeof(char));
    int i;

    for (i = 0; i < length; i++)
    {
        int random_index = rand() % strlen(password_chars);
        password[i] = password_chars[random_index];
    }

    password[length] = '\0';

    return password;
}
