
#include<stdio.h>
void main()
{
    int i,j,k,m,n;
    for ( i = 5; i>=1; i--) //for row(outer loop)
    {
    	 for(j=1;j<=i;j++) //for left side
        {
        	printf("%d ",j);
		}
        for ( k=10 ; k>(i*2) ; k-- ) //for upper space
        {
            printf("  ");
        }
        for(j=1;j<=i;j++) //for right side
        {
        	printf("%d ",j);
	    }
	    /*m=1;
	    for(j=5;j>=i;j--)
	    {
	    	printf("%d ",m++);
		}*/
	    
	    printf("\n");
	} 
	for( i = 2; i<=5; i++) 
	{
		for(j=1;j<=i;j++) //for left side
        {
        	printf("%d ",j);
		}
        for ( k=10 ; k>(i*2) ; k-- ) //for upper space
        {
            printf("  ");
        }
        for(j=1;j<=i;j++) //for right side
        {
        	printf("%d ",j);
	    }
	    printf("\n");
	} 
     
}
