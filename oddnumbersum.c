#include <stdio.h>

int main()
{
int i,limit,sum=0;
printf("enter the limit");
scanf("%d",&limit);
for (i=1;i<limit;i++)
{
 if(i%2!=0){  
     printf("%d \n",i);
     sum = sum + i;


 }    
}
     printf("%d", sum);

    return 0;
}
