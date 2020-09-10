#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter an int: ");
    scanf("%d", &num);
    printf("%d squared = %d\n",num, num*num);
    return 0;
}