#include <cs50.h>
#include <stdio.h>


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command line arguement");
        return 1;
    }
    else
    {
        printf("Hello, %s\n", argv[1]);
        // return 0;
    }
    
}

// echo $?      to check exit status of our code
