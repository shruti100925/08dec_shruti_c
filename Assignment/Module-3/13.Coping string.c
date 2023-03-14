//WAP to print one string copied in another string
#include<stdio.h>
int main(){
	int c=0;
	char s[100], d[100]="Hello";
	printf("Before coping: %s",d);
	printf("\n\tEnter a string to copy:");
	gets(s);
	
	while(s[c] != '\0'){
		d[c]=s[c];
		c++;		
	}
	d[c]='\0';
	
	printf("\n\tAfter coping string:%s",d);
}

