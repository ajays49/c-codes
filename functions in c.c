
#include <stdio.h>
void credits(int a,int b)
 {
    char x;
    printf("enter character");
    scanf("%s",&x);
    if(x=='n')
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",a+b);
    }
    
 }
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    credits(a,b);
    return 0;
}


