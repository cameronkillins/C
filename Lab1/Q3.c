#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int userInput;
    do 
    {
        printf("Please input an integer (0 to end): ");
        scanf("%d", &userInput);
        if (abs(userInput) > 9 && abs(userInput) < 100)
        {
            printf("Your input is a two-digit number: %d\n", userInput);
        }
    }while (userInput != 0);
    printf("Thank you for using my software. Bye!\n");
    return 0;
}