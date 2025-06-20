#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0
 */
int main(void)
{
    int num = 0;

    while (num < 10)
    {
        putchar(num + '0'); /* print digit as char */
        num++;
    }
    putchar('\n'); /* print new line */
    return (0);
}
