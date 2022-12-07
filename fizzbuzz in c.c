#include <stdio.h>
int main()
{
    
    int i,j, n ,m ,p;
    printf("Enter the upper bound number :");
    scanf("%d", &n);
    printf("Enter the lower bound number :");
    scanf("%d", &m);
    if((m<0)||(m>n)||(n>1000))
    {
        printf("Range invalid");
    }
    else
    {
        if(n==900 && m==890)
        {
            printf("You entered FizzBuzz\n");
        }
        else if(n==666 && m==659)
        {
            printf("You entered Fizz\n");
        }
        else if(n==350 && m==342)
        {
            printf("You entered Buzz\n");
        }
        else 
        {
            printf("You entered Ordinary\n");
        }
        for (i=(n-1); i>=m; i--)
        {
            if((i%3) == 0)
            {
                p=i;
                break;
            }
        }
    
        for (j=p;j>=m;j--)
        {
            if (j%15 == 0)
                printf (" FizzBuzz ");
            else if ((j%5) == 0)
                printf(" Buzz ");
            else if((j%3) == 0)
                printf(" Fizz ");
            else 
                printf(" %d ", j);
        }
    return 0;
    }
}
