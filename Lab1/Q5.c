#include <stdio.h>

int main(void)
{
    int side1;
    int side2;
    int side3;
    int triplesCount=0;

    for(side1=1;side1<=200;side1++)
    {
        for(side2=side1;side2<=200;side2++)
        {
            for(side3=1;side3<=200;side3++)
            if(side3*side3 == (side1*side1) + (side2*side2))
            {
                printf("%d %d %d\n", side1, side2, side3);
                triplesCount++;
            }
        }

    }
    printf("%d triples were found.\n", triplesCount);
    return 0;
}