//WAP to swap the numbers
#include <stdio.h>
int main()
{
    int var1, var2;
    
	printf("Enter two integers:");
    scanf("%d%d", &var1, &var2);
    printf("\nBefore Swapping \nFirst variable = %d \nSecond variable = %d", var1, var2);
    
	
	var1 = var1 + var2;
    var2 = var1 - var2;
    var1 = var1 - var2;
    printf("\nAfter Swapping\nFirst variable = %d \nSecond variable = %d", var1, var2);
    
	return 0;
}
