// #include <iostream>
// using namespace std;
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    printf("enter 3 numbers");
    scanf("%d%d%d", &num1, &num2, &num3);
    if (num1 < num2)
    {
        printf("greater number is %d", num2);
    }
    else if (num2 < num3)
    {
        printf("greater number is %d", num3);
    }
    else if (num3 < num1)
    {
        printf("greater number is %d", num1);
    }
    else
    {
        printf("its not a valid number");
    }
    return 0;
}
