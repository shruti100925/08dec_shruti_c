//WAP to Convert Days into years and weeks
#include<stdio.h>
int main()
{
	float days;
	float years, weeks;
	
	printf("Enter the number of Days:",days);
	scanf("%f",&days);
	
	years= days/365;
	weeks=days/7;
	
	printf("\nNumber of years:%.2f",years);
	printf("\nNumber of weeks:%.2f",weeks);
	
	return 0;

}
