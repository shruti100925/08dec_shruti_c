#include<stdio.h>
struct Stdata
{
    int id,age;
    char nm[20],add[50];
};
int main()
{
    struct Stdata st[100];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter Employee's id.:");
        scanf("%d",&st[i].id);
        printf("Enter Employee's name:");
        scanf("%s",&st[i].nm);
        printf("Enter Employee's address:");
        scanf("%s",&st[i].add);
        printf("Enter Employee's Age:");
        scanf("%d",&st[i].age);
        printf("<------------------------------------->");
    }
    
    for (i = 0; i < 5; i++)
    {
        printf("\nEmployee's id is:%d \n Name:%s \n Address:%s \n Age:%d",st[i].id, st[i].nm, st[i].add, st[i].age);
    }
}
