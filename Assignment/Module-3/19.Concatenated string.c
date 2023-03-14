//Write a program to concatenate the two string using pointer
#include<stdio.h>
#include<string.h>
int main()
{
	char fnm[20],lnm[20], *p,*q;
	
	
	printf("Enter First name:");
	gets(fnm);
	printf("\nEnter Last name:");
	gets(lnm);
	
	p=fnm;
	while(*p != '\0')
	{
		*p++;
	}
	q=lnm;
	while(*q != '\0')
	{
		*p=*q;
		*p++;
		*q++;
	}
	*p='\0';
	printf("\nConcatenated string: %s",fnm);
	return 0;
}

