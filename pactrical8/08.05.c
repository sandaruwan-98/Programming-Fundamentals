#include <stdio.h>             
#include<conio.h>


int main()                        
{
	int a[100],n,i,j;
	printf("Array size: ");
        scanf("%d",&n);
        
        
      for(i=0;i<n;i++)
    {
    	printf("Elements: ");
        scanf("%d",&a[i]);
    }
	/*for (i = 0; i < n; i++)                    
	{
		for (j = 0; j < n; j++)           
		{
			if (a[j] > a[i])            
			{
				int tmp = a[i];     
				a[i] = a[j];           
				a[j] = tmp;        
			}  
		}
	}*/
	printf("\n\nAscending : ");               
	for (i = 0; i < n; i++)           
	{
		printf(" %d ", a[i]);
	}
	for (i = 0; i < n; i++)                   
	{
		for (j = 0; j < n; j++)            
		{
			if (a[j] < a[i])            
			{
				int tmp = a[i];         
				a[i] = a[j];           
				a[j] = tmp;            
			}
		}
	}
	printf("\n\nDescending : ");                   
	for (i = 0; i < n; i++)                  
	{
		printf(" %d ", a[i]);                  
	}

	return 0;         
getch();
}
