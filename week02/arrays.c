#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int score[4];
    score[0] = 73;
    score[1] = 72;
    score[2] = 33;

    printf("Average: %f\n", (score[0] + score[1] + score[2]) / (float) 3 );
}