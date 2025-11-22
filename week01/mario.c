#include <stdio.h>
#include <cs50.h>

int input(void);

int main(void)
{
    int n = input();

    //print inert triangle                                      -----
    // int m = n - 1 ;                                          ---
    // for (int i = m; i > 0; i--)                              --        
    // {                                                        -
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("*");
    //     }
    // printf("\n");
    // }

    // print straight triangle                                  -
    // for (int i = 0; i < n; i++)                              --  
    // {                                                        ---                 
    //     for (int j = 0; j <= i; j++)                         ----            
    //     {                                                    -----
    //         printf("#");
    //     }
    //     printf("\n");
    // }


    //but we need this one
    //      -
    //     --
    //    --- 
    //   ----
    //  -----



    for (int i = (n-1); i >= n;i++)
    {
        for (int j = i; j > 1; j++)
        {
            printf(" ");
        }
    printf("#\n");
    }

}


int input(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);
    return n;
}
