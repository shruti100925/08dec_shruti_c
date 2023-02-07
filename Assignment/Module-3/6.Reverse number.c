//WAP to print number in reverse order
#include<stdio.h>
int main()
{
	int reverse,n;
	printf("Enter a number:");
	scanf("%d",&n);
	 
	while(n>0){
		reverse=n%10;
		n=n/10;
		printf("%d",reverse);
	} 
}
