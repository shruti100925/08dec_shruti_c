#include<stdio.h>
void main()
{
	int i, j,k,m=15;
	
	for(i=7;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=1;j++)
		{
			printf("*");
		}
    	for(j=14;j>(i*2);j--)
		{
			if(i==4)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		for(j=14;j<m;j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}
