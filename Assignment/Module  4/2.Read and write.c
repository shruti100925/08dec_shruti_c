
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    FILE *fp;
 	char ch, data[50];
 	
 	fp=fopen("output.txt","r");
 	ch=fgetc(fp);
 	
	while(ch!=EOF){
 		printf("%c",ch);
	    ch=fgetc(fp);
	 }
	 
	 fclose(fp);
	
	fp= fopen("output.txt","a");
	scanf("%s",&data);
	fprintf(fp,"%s",data);
	fclose(fp);
	 
 
    return 0;
}
