#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr;
	fptr = fopen("filename.txt","w");
	if (fptr == NULL)
	{
		printf("invalid file !!");
	}
	int num;
	printf("enter the number you want to write : ");
	scanf("%d",&num);
	fprintf(fptr,"%d",num);
	fclose(fptr);
}
