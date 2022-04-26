
#include <stdio.h>

int main()
{
    int i,number,flag=0;
    printf("enter the number:");
    scanf("%d",&number);
    for(i=2; i < number/2; i++){
        if( number % i == 0){
            printf("not prime");
            flag=1;
            
            break;
            
        }
    }
    if (flag == 0){
        printf("prime number ");
    }
    
        
       
    
    return 0;
}
