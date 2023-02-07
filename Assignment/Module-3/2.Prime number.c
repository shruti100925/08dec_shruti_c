#include<stdio.h>
void main()
{
    int no;
    printf("Enter a number to check if it is prime or not:");
    scanf("%d",&no);
    
    if(no%2==0)
    {
    	printf("Its not a prime number!");
	}
	else
	    printf("Prime number!");
    
}
