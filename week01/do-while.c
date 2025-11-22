#include <stdio.h>
#include <cs50.h>

void meow(int n);     //Prototype of function
int get_positive_int(void);

int main(void)
{
    // int n ;  // call or declare variable
    // do
    // {
    //     n = get_int("Numbers: ");   // using variable 'n'
    // }
    // while (n < 1);
    int times = get_positive_int();
    meow(times);
}

int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Positive Integer: ");
    }
    while (n < 1);
    return n;
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
       printf("meow\n");
    }
}