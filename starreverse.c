
#include <stdio.h>

int main()
{
 int i, j,n;
 printf("enter the number of: ");
 scanf("%d",&n);
 
 for(i=0; i<n; i++){ //rows
     for(j = 0; j<n-i; j++){ //columns
         printf("*");
     }
     printf("\n");
 }
 
        
       
    
    return 0;
}
