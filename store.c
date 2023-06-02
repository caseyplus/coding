#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int scores[3];
    scores[0] = get_int("first number ");
    scores[1] = get_int("second number ") ;
    scores[2] = get_int("third number ");

    printf("%i\n", scores[0] + scores[1] + scores[2]);
}