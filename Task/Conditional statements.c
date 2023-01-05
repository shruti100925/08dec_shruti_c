//WAP to print if input is character or integer
#include<stdio.h>
int main()
{
	char ch;
	 printf("Enter a value:");
	 scanf("%c",&ch);
	 
	 if(ch>=65 && ch<=90 || ch>=97 && ch<=122){
	 	printf("It is an alphabet!");
	 	
	 }
	 else if(ch>=33 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<=96 || ch>=123 && ch<=126){
	 	printf("It is a special character");
	 }
	 else{
	 	printf("It is an Integer!");
	 }
}
