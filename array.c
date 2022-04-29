#include <stdio.h>

int main()
{
int a[100];
int i, limit;
printf("enter the limit:");
scanf("%d",&limit);
printf("enter the values:");
for(i=0; i<limit; i++){
    scanf("%d", &a[i]);
    
}
printf("enter the values are:");
for(i=0; i<limit; i++){
    printf("%d\t", a[i]);
    
}
    return 0;
}