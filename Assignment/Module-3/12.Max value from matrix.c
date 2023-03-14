#include<stdio.h>
int main()
{
	int i,j,k,a[10][10];
 	printf("Enter matrix value:\n");
 	for(i=0;i< 3;i++)
 	{
  		for(j=0;j< 3;j++)
  		{
   			printf("a[%d][%d]=",i,j);
   			scanf("%d", &a[i][j]);
  		}
  		printf("\n");
 	}
 	
	 k = a[0][0];
 	
	for(i=0;i< 3;i++)
 	{	
  		for(j=0;j< 3;j++)
  		{
   			if(a[i][j]>k)
   			{
    			k = a[i][j];
   			}
  		}
 	}
 	printf("Largest Value from given matrix = %d\n", k);
}
