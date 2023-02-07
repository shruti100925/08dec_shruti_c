//WAP to find a year is Leap year or not
#include<stdio.h> 
int main()
{
	int year;
	printf("<------Find if given year is Leap year or not.----->");
	printf("\n\t\tEnter a year:");
	scanf("%d",&year);
	
	if(year % 400 == 0){                      //Leap year is divided by 400
		printf("\t\tIt is a Leap year!");
	}
	else{
		printf("\t\tIt is not a Leap year!");
	}
	return 0;
}
