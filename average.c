#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float n = get_int("How many scores? ");
    float m = 0;

    for (int i = 0; i < n; i++)
    {
      m = get_float("Score: ") + m;
    }


    printf("Average: %f\n", m / n);
}