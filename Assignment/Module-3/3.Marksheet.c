//WAP to print marksheet of student
#include<stdio.h>

int main()
{
	float sub1, sub2, sub3,sub4,sub5, Total;
	
	printf("Enter Marks of given below subjects.\n\tEnglish:");
	scanf("%f",&sub1);
	printf("\n\tMaths:");
	scanf("%f",&sub2);
	printf("\n\tScience:");
	scanf("%f",&sub3);
	printf("\n\tSocial science:");
	scanf("%f",&sub4);
	printf("\n\tGujarati:");
	scanf("%f",&sub5);
	
	
	Total = ((sub1+sub2+sub3+sub4+sub5) / 500)*100;
	
	printf("\n\tTotal Percentage = %.2f",Total );
	
	if(sub1>=33&&sub2>=33&&sub3>=33&&sub4>=33&&sub5>=33){
		printf("\n\tPass");
		
		if(Total>=70){
			printf("\n\tDistinction!");
		}
		else if(Total<=69){
			printf("\n\tFirst class!");
		}
		else if(Total<=59){
			printf("\n\tSecond class!");
		}
		else if(Total<=49||Total>=33){
			printf("\n\tPass class!");
		}
		else{
			printf("\n\tFail");
		}
		     
	}
	else if(sub1<33||sub2<33||sub3<33||sub4<33||sub5<33){
		printf("\n\tFail");
		if(sub1<33){
			printf("\n\tBacklog in English.");
		}
		else if(sub2<33){
			printf("\n\tBacklog in Maths");
		}
		else if(sub3<33){
			printf("\n\tBacklog in Science");
		}
		else if(sub4<33){
			printf("\n\tBacklog in social science");
		}
		else if(sub5<33){
			printf("\n\tBacklog in gujarati");
		}
		else{
		printf("\n\tFail");
		}
		}
	
	return 0;
}
