#include <stdio.h>

int main(void) 
{
    int i;
    int sum = 0;
    for(i=0;i<10;i++) 
    {
        int num;
        printf("Enter an int: ");
        scanf("%d", &num);
        if(num%2 == 1) 
        {
            sum += num;
        }
    }
    printf("Total sum = %d", sum);
    return 0;
}