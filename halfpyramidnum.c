
#include <stdio.h>

int main()
{
    int i, j, limit;
    printf("enter the limit");
    scanf("%d", &limit);
    for (i = 1; i <= limit; i++)
    {
        for (j = 1; j <= i; j++)
        {

            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
