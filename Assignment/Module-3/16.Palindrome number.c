//WAP to find if number is palindrome
#include<stdio.h>
int main(){
	int num,p;
	printf("Enter a number to check if it is palindrome:");
	scanf("%d",&num);
	p=rev(num);
	if(num==p){
		printf("%d Number is  palindrome.",num);
    }
	else{
	    printf("%d Number is not palindrome.",num);
    }
	
}


int rev(int n)
{
	static int temp=0;
	if(n==0){
	 return temp;
	}
	temp=(temp*10)+(n%10);
	return rev(n/10);  
	
}

