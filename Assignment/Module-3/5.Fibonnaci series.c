//WAP to print fabonnaci series
#include<stdio.h>
int main()
{
	int n,i,j,k=0,l=1;
	j=1+l;
	printf("Enter a number till you want to print fabonnaci series:");
	scanf("%d",&n);
	
	printf("%d, %d, ",k,l);
	
	for(i=3;i<=n;++i){
		printf("%d, ",j);
		k=l;
		l=j;
		j=k+l;
	}
	return 0;
}

