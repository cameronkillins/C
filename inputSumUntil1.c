#include <stdio.h>

int main(void) 
{
    int sum = 0;
    int num = 0;
    while (num != 1)
    {
        sum += num;
        printf("Enter an int: ");
        scanf("%d", &num);
    }
    printf("Total sum = %d", sum);
    return 0;
}