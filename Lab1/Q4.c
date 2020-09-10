#include <stdio.h>

int main(void)
{
    int userIterations;
    printf("Please enter the amount of terms to use in the series to "
    "calculate PI: ");
    scanf("%d", &userIterations);

    float PI;
    int i;
    for(i=0;i<userIterations;i++)
    {
        PI += (i%2==0) ? 4/(1+2*(float)i) : -4/(1+2*(float)i);
    }
    printf("You approximated PI = %.6f, via %d terms", PI, userIterations);
    return 0;
}