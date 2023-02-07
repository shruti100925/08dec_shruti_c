//WAP to print area of triangle, Rectangle, circle
#include<stdio.h>
#include<math.h>
int main()
{
	float side,a,b,c,area;
	int choice;
	float const p=3.146;
	printf("Press 1 to calculate Area of Triangle.");
	printf("\nPress 2 to calculate Area of Rectangle.");
	printf("\nPress 3 to calculate Area of Circle.");
	printf("\n\tEnter your choice: ");
	scanf("%d",&choice);
	printf("--------------------------------------------------------------");
	
	switch(choice)
	{
		case 1:
			printf("\n\tEnter the sides of Triangle: ");
			printf("\nSide 1:");
			scanf("%f",&a);
			printf("\nSide 2:");
			scanf("%f",&b);
			printf("\nSide 3:");
			scanf("%f",&c);
			side=(a+b+c)/2;
			area=sqrt(side*(side-a)*(side-b)*(side-c));
			printf("Area of triangle=%.2fmsqr",area);
			break;
		case 2:
			printf("\n\tEnter the below value.");
			printf("\n\tWidth=");
			scanf("%f",&a);
			printf("\n\tLength=");
			scanf("%f",&b);
			area=a*b;
			printf("Area of Rectangle=%.2fcmsqr",area);
			break;
		case 3:
			printf("\n\tEnter the radius of circle=");
			scanf("%f",&a);
			area=p*a;
			printf("Area of Circle=%.2fmsqr",area);
			break;
		default:
		    printf("\n\tEnter a valid choice");
			break;	
	}	
}
