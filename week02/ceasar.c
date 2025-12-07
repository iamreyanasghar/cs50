#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int key = atoi(argv[1]);
    string text = get_string("plaintext: ");
    
    
    printf("ciphertext: %s", text);
    
    if (argc != 2)
    {
        printf("Usage: ./caesar.out key");
        return 1;
    }
    else 
    {
        return 0;
    }
}


