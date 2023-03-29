
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    FILE *fp;
 	char ch;
 	
 	fp=fopen("output.txt","r");
 	ch=fgetc(fp);
 	
	while(ch!=EOF){
 		printf("%c",ch);
	    ch=fgetc(fp);
	 }
	 
	 fclose(fp);
	
	fp= fopen("output.txt","a");
	fscanf(fp,"%s",ch);
	fprintf(fp,"%s",ch);
	fclose(fp);
	 
 
    return 0;
}
