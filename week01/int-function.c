#include <stdio.h>
#include <cs50.h>

void meow(int n);     //Prototype of function

int main(void)
{
    int n = get_int("Numbers: ");
    meow(n);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
       printf("meow\n");
    }
}