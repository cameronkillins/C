#include <stdio.h>

int main(void)
{
    int i;
    int sum=0;
    for(i=10;i<=100;i++)
    {
        if(i%2==0)
        {
            sum += i;
        }
    }
    printf("for loop sum: %d\n", sum);

    i=10;
    sum=0;
    while(i<=100)
    {
        if(i%2==0)
        {
            sum += i;
        }
        i++;
    }
    printf("while loop sum: %d\n", sum);

    i=10;
    sum=0;
    do
    {
       if(i%2==0)
        {
            sum += i;
        }
        i++; 
    }while(i<=100);
    printf("do-while loop sum: %d\n", sum);

    return 0;
}