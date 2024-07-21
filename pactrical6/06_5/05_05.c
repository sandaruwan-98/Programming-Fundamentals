#include <stdio.h>  
int main()  
{  
    int m,j,k,i;  
    m=4;  
   for(i=1;i<=4;i++)  
    {   
       for(j=1;j<=m-1;j++)  
       {  
           printf(" ");  
       }  
       for(k=1;k<=2*i-1;k++)  
       {  
         printf("*");  
       }  
       m--;  
     
      printf("\n");  
    }  
    return 0;  
}
