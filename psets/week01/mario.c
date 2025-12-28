#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = (n - 1); j > i; j--)
        {
            printf(" ");
        }
        for (int z = (n - (i + 1)); z < n; z++)
        {
            printf("#");
        }
        printf("\n");
    }
}

