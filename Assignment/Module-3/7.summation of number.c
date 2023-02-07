//WAP to print summation ofnumber
#include<stdio.h>
int main()
{
	int n,i,j=0;
	printf("Enter a number:");
	scanf("%d",&n);
	
	while(n>0){
		i=n%10;
		j=j+i;
		n=n/10;
		
	}
	printf("%d",j);

}
