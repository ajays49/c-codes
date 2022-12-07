
#include <stdio.h>

int main()
{
    int m,n,o,k;
    printf("Enter your marks ");
    scanf("%d%d%d",&m,&n,&o);
    if((m<0 || m>100)||(n<0 || n>100)||(o<0 || o>100))
    {
        printf("Wrong Entry");
    }
    else
    {
        k=((m+n+o)/3);
        if(k<40)
        {
            printf("Grade F");
        }
        else if(k>=40 && k<50)
        {
            printf("Grade E");
        }
        else if(k>=50 && k<60)
        {
            printf("Grade D");
        }
        else if(k>=60 && k<70)
        {
            printf("Grade C");
        }
        else if(k>=70 && k<80)
        {
            printf("Grade B");
        }
        else if(k>=80 && k<90)
        {
            printf("Grade A");
        }
        else 
        {
            printf("Grade S");
        }
    }
}
    

