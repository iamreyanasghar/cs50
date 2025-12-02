#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    int key = atoi(argv[1]);
    string text = get_string("plaintext: ");
    
    
    for(int i = 0; text[i] != '\0'; i ++)
    {
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = ((text[i] - 'A' + key) % 26) + 'A';
        }
        else if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = ((text[i] - 'a' + key) % 26) + 'a';
        }
        else
        {
            text[i] = text[i];
        }
    }
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


