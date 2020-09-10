#include <stdio.h>

int main(void)
{
    int userAmount = -1;
    int lowest;
    int temp;
    while(1)
    {
        printf("Please input the amount of values that will be entered: ");
        scanf("%d", &userAmount);
        if(userAmount > 0) break;
        printf("Invalid amount.\n");
    }

    printf("Enter an integer to add to the list:");
    scanf("%d", &lowest);
    int i;
    for(i=1;i<userAmount;i++)
    {
        printf("Enter an integer to add to the list:");
        scanf("%d", &temp);
        lowest = (temp < lowest) ? temp : lowest;
    }
    printf("The lowest number you entered was %d.", lowest);
    return 0;
}
