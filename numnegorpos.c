
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter a number");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("number is negative");
    }
    else
    {
        printf("number is positive");
    }

    return 0;
}