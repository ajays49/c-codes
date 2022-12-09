
#include<stdio.h>
struct employee
{
    int age,salary;
    char name[25],address[50];
}emp[100];
 
void main()
{
    int i,n,count=0,avg;
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter employee info as name ,address , age , salary\n");
    for(i=0;i<n;i++)
    {
        scanf("%s %s %d %d",&emp[i].name,emp[i].address,&emp[i].age,&emp[i].salary);
    }
    printf("\nNAME\t\tADDRESS\t\tAGE\t\tSALARY\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t\t%s\t\t%d\t\t%d\n",emp[i].name,emp[i].address,emp[i].age,emp[i].salary);
    }
    for(i=0;i<n;i++)
    {
        count+=emp[i].salary;
    }
    avg=count/n;
    printf("%d\n",avg);
    
}
