//WAP to print a pattern
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=4;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
