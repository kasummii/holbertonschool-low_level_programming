#include "main.h"
#include <stdio.h>

/**
 * main - check the _isdigit function for all digits and ASCII chars
 *
 * Return: Always 0.
 */
int main(void)
{
    int c;

    /* Check digits 0 to 9 */
    for (c = '0'; c <= '9'; c++)
        printf("%c: %d\n", c, _isdigit(c));

    /* Check ASCII characters 32 to 126 excluding digits */
    for (c = 32; c <= 126; c++)
    {
        if (c < '0' || c > '9')
            printf("%c: %d\n", c, _isdigit(c));
    }

    return (0);
}
