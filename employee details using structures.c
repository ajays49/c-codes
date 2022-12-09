#include<stdio.h>
#include<string.h>
struct employee
{
    int id,date,month,year;
    long int number;
    char name[25];
}emp[100];
 
int main()
{
    int i,n;
    char mn[100];
    printf("Enter the no of employees\n");
    scanf("%d",&n);
    printf("Enter employee info as id ,name ,date of joining ,month of joining ,year of joining ,number\n");
    for(i=0;i<n;i++)
    {
        scanf("%d %s %d %d %d %ld",&emp[i].id,emp[i].name,&emp[i].date,&emp[i].month,&emp[i].year,&emp[i].number);
    }
    for(i=0;i<n;i++)
    {
        sprintf(mn,"%ld",emp[i].number);
        if (strlen(mn)==10 && mn[0]!=0 )
        {
            if(emp[i].id%5==0 && emp[i].year<2020 )
            {
            printf("%s %ld\n",emp[i].name,emp[i].number);
            } 
        }
       else
       {
           printf("Input Invalid\n");
       }
    }
    
    
}

