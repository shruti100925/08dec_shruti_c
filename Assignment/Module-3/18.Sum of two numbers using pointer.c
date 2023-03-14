//WAP to print addition of number using pointer
#include<stdio.h>
int main(){
	int a,b,*p,*q,sum;
	 printf("Enter below two numbers for addition:");
	 printf("\nNumber 1:");
	 scanf("%d",&a);
	 printf("\nNumber 2:");
	 scanf("%d",&b);
	 
	 p=&a;
	 q=&b;
	 
	sum=*p+*q;
	
	printf("\nAddition of two numbers= %d",sum); 
	 
	
}
