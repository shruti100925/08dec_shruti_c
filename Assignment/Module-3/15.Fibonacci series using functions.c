//WAP to print fibonacci series using function
#include<stdio.h>
int n;
int main()
{
	
	printf("Enter a number till you want to print fibonnaci series:");
	scanf("%d",&n);
	ans(n);
	return 0;
}
int ans(int n)
{
	int i,j,k=0,l=1;
	j=1+l;
	printf("<----------------Fibonnaci series----------------->");
	printf("\n%d ,%d ,",k,l);
	for(i=3;i<=n;++i){
		printf("%d ,",j);
		k=l;
		l=j;
		j=k+l;
	}
	
}
