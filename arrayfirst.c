#include <stdio.h>

int main()
{
    int a[5];
    int i;
    printf("enter the values");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
        printf("enterd the value is :%d ", a[0]);

    for (i = 0; i < 5; i++)
    {
    printf("%d ", a[i]);
    }
    return 0;
}