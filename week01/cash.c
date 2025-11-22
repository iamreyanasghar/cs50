#include <stdio.h>
#include <cs50.h>

int input(void);

int main(void)
{
    int r = input();
    int c = 0;
    while (r >= 25)
    {
        r = r - 25;
        c ++;
    }
    while (r >= 10)
    {
        r -= 10;
        c++;
    }
    while (r >= 5)
    {
        r -= 5;
        c++;
    }
    while (r >= 1)
    {
        r -= 1;
        c++;
    }
    printf("%i\n", c);
}

int input(void)
{
    int r;
    do 
    {
        r = get_int("Change Owed: ");
    }
    while (r < 1);
}