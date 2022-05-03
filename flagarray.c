
#include <stdio.h>

int main()
{
int i, limit,values[100],searchkey,flag=0;
printf("enter the limit:");
scanf("%d",&limit);
printf("enter the values are:");
for(i=0; i<limit; i++){
    scanf("%d",&values[i]);
    
}
printf("please enter the search key:");
scanf("%d",&searchkey);


for(i=0; i<limit; i++){
    if (searchkey == values[i]){
        flag=1;
        // printf("item found at %d position ",i+1);
    }
}

if(flag==1){
    printf("value found the position is %d",i);
    
}else
{
    printf("searchkey is not found");
}
    return 0;
}
