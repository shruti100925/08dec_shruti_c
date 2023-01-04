//WAP to find square and cube of number
#include<stdio.h>
int main()
{
	int number;
	printf("Enter a value of number:");
	scanf("%d",&number);
	
	int square= number*number;
	int cube= number*number*number;
	printf("-----Square of a number-----");
	printf("\n\tValue=%d",square);
	printf("\n-----Cube of number-----");
	printf("\n\tValue=%d",cube);
	
	return 0;
	
}
