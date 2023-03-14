//Write a Program of find the element of given position from the array
#include <stdio.h>

int main() 
{
	int arr[5];
	int i,tofind;
	printf("Input the 5 members of the array:\n");
	for(i = 0; i < 5; i++) 
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter the index to find element:");
	scanf("%d",&tofind);
	
	for(i = 0; i < 5; i++) 
	{
		
		if(tofind==i) 
		{
			
			printf("index[%d] = %d\n", i, arr[i]);
		}
	}
	return 0;
}
