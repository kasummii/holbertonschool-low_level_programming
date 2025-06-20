#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, then uppercase
 *
 * Return: Always 0
 */
int main(void)
{
    char ch;

    /* print lowercase letters */
    for (ch = 'a'; ch <= 'z'; ch++)
        putchar(ch);

    /* print uppercase letters */
    for (ch = 'A'; ch <= 'Z'; ch++)
        putchar(ch);

    putchar('\n');

    return (0);
}
