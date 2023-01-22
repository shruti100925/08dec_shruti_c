#include<stdio.h>
void main()
{
    int i,j,k,m,l;
    for ( i = 1; i <= 5; i++) 
    {
        for ( j = 4; j >= i; j--) 
        {
            printf("  ");
        }
        m=1;
        for (k=1; k<=i; k++)
        {
        	printf("%d ",m++);
		}
		m=m-2;
		for (l=1; l<i; l++)
		{
			printf("%d ",m--);
		}
		
        printf("\n");
    }    
}

