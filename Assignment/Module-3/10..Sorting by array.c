//WAP to sort 5 elements
#include<stdio.h>
int i,j,k,num[5];
int main(){
	
	printf("Enter 5 numbers: \n");
	for(i=0;i<5;i++)
	scanf("%d",&num[i]);
	

	
	//Ascending order
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(num[i]>num[j]){
			
			k=num[i];
			num[i]=num[j];
			num[j]=k;
			}
		}
	}
	printf("Ascending order:");
	for(i=0;i<5;i++){
	printf("\n%d",num[i]);
	}
	
	//Decending order
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(num[i]<num[j]){
			
			k=num[i];
			num[i]=num[j];
			num[j]=k;
			}
		}
	}
	printf("Decending order:");
	for(i=0;i<5;i++){
	printf("\n%d",num[i]);
	}
	return 0;
}
	

