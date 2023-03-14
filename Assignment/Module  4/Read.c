#include<stdio.h>
int main()
{
    FILE *fptr;
    char str[20] = {"Hello"};
    fptr = fopen("module 4.txt", "w");
    fprintf(fptr,"%s",str);
    fclose(fptr);
    
}
