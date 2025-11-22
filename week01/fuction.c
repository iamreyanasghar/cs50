#include <stdio.h>
#include <cs50.h>

void meow(void)     //Prototype of function

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        meow();
    }
}

void meow(void)
{
    printf("meow\n");
}