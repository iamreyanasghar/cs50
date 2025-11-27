#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int score[4];
    score[0] = get_int("Score: ");
    score[1] = get_int("Score: ");
    score[2] = get_int("Score: ");

    printf("Average: %f\n", (score[0] + score[1] + score[2]) / (float) 3 );
}