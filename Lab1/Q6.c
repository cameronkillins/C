#include <stdio.h>

#define NUMBEROFDIGITS 7

int main(void)
{
    int userInput;
    int reversedNum = 0;

    printf("Please enter a 7-digit positive integer to be reversed: ");
    scanf("%d", &userInput);

    int numOfDigits;
    int placeValMultiplier = 1;
    for(numOfDigits=NUMBEROFDIGITS;numOfDigits>0;numOfDigits--)
    {
        int divisor = 1;
        int i;
        for(i=1;i<numOfDigits;i++)
        {
            divisor *= 10;
        }
        reversedNum += (userInput/divisor)*placeValMultiplier;
        printf("%d,%d,%d,%d\n", userInput, divisor, userInput/divisor*placeValMultiplier, userInput%divisor);
        placeValMultiplier *= 10;
        userInput = userInput%divisor;

    }
    printf("%d\n", reversedNum);
    return 0;
}