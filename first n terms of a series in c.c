
#include <stdio.h>

int main()
{
    int numtr,i;
    float a=95.0,c=20.5;
    printf("enter the numtr:");
    scanf("%d",&numtr);
    for(i=1; i<=numtr; i++)
    {
        if(i>1 && i==2)
            a = a + c;
        
        else if(i>2)
        {
            c = c + 2;
            
            a = a + c;
        }
        if(i==numtr)
            printf("%.1f", a);
        else
            printf("%0.1f ", a);
    }
    return 0;
}

