//WAP to print Vowels
#include<stdio.h>
int main()
{
	char ch,A,E,I,O,U;
	//ch=toupper(ch);
	
	printf("Enter an alphabet to check if its a vowel or Consonant.\nAlphabet:");
	scanf("%c",&ch);
	
	switch(toupper(ch)){
		case 'A':
			printf("Entered Alphabet is a vowel");
			break;
		case 'E':
			printf("Entered Alphabet is a vowel");
			break;
		case 'I':
			printf("Entered Alphabet is a vowel");
			break;
		case 'O':
			printf("Entered Alphabet is a vowel");
			break;
		case 'U':
			printf("Entered Alphabet is a vowel");
			break;		
		default:
			printf("Entered Alphabet is a Consonant");
			break;	
	}
}
