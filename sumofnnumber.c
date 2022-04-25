#include <stdio.h>

 int main()
{
    int i,n, sum=0;
    printf("enter the number");
    scanf("%d",&n);
    for (i=0; i<=n; i++){
      
        sum += i;
    }
        printf("%d\n ",sum);

   
    return 0;
}