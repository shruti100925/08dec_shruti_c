//WAP to find simple interest and compound interest of a number
#include<stdio.h>
#include<math.h>
int main()
{
	float principle, time, rate, SI, CI,temp;
	
	printf("Enter a value:\nPrinciple:");
	scanf("%f",&principle);
	printf("\nRate:");
	scanf("%f",&rate);
	printf("\nTime(months):");
	scanf("%f",&time);
	
	printf("\n----Simple Interest-----");
	SI= ( principle*time*rate)/100;
	printf("\nSimple Interest=%f",SI);
	
//	CI=principle*(1+rate/100);
	CI= principle*(pow((1+rate/100),time));
	//temp = CI - principle;
	printf("\n-----Compound Interest----");
	printf("\nValue=%f",CI);
	return 0;
}
