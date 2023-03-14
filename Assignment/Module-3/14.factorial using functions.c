//Write a program to find out the factorial of given number using function
#include<stdio.h>
int i,no,fact=1;
void getdata()
{
	printf("\n Enter number:");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		fact=fact*i;
	}
}
void showdata()
{
	printf("\n Factorial of number:%d",fact);
}
int main()
{
	getdata();
	showdata();
	return 0;
}
