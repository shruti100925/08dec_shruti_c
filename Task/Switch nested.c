//WAP to print to take username password from user
#include<stdio.h>
int main()
{
	int ch, a;
	
	printf("\tWELCOME TO APOLLO HOSPITAL");
	printf("\n1.Take a Doctor's Appointment.\n2.Contact Number of Labrotory.");
	printf("\n\tChoose from above:");
	scanf("%d",&ch);
	
	switch(ch){
		
		case 1:
			
			printf("\n1.Sankalp vanzara\n2.Kamal doshi");
			printf("\n\tChoose from above doctor's you would like to meet:");
			scanf("%d",&ch);
			
			switch(ch){
				case 1:
					
					printf("\n1.Morning: 9-10am\n2.Evening: 6-7pm");
					printf("\n\tSelect above given time:");
					scanf("%d",&a);
					switch(a){
						case 1:
							printf("\n\tAppointment Booked at 9-10am! Thankyou!",a);
					        break;
					    case 2:
						    printf("\n\tAppointment Booked at 6-7pm! Thankyou!");
							break;
						default:
						    printf("\n\tEnter a Valid option!");
							break;	    
					}
				break;	
				
				case 2:
				
				     printf("\n1.Morning: 10-11am\n2.Evening: 7-8pm");
					 printf("\n\tSelect above given time:");	
					 scanf("%d",&a);
					 switch(a){
						case 1:
							printf("\n\tAppointment Booked at 10-11am! Thankyou!",a);
					        break;
					    case 2:
						    printf("\n\tAppointment Booked at 7-8pm! Thankyou!");
							break;
						default:
						    printf("\n\tEnter a Valid option!");	
							break;    
					}
					 
				break;
					 
				default:
					printf("Enter a valid option!");
					break;
			}
		break;	
		case 2:	
		printf("\nContact number of Metropolis Lab is 1800050000");
		break;
		
		default:
			printf("\n\tEnter a valid option!");
			break;
	}
	
	
}
