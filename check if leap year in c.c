#include <stdio.h>

int main()
{
    int a;
    printf("enter valid year:");
    scanf("%d",&a);
    if(a%4!=0)
    {
        printf("%d is not a leap year",a);
    }
    if(a%4==0 && a%100!=0)
    {
        printf("%d is a leap year",a);
    }
    if(a%4==0 && a%100==0 && a%400!=0)
    {
        printf("%d is not a leap year",a);
    }
    if(a%4==0 && a%100==0 && a%400==0)
    {
        printf("%d is a leap year",a);
    }
    return 0;
}


