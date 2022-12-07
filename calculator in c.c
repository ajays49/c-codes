#include <stdio.h>

int main()
{
    char y;
    int a,b;
    
    printf("enter the needed operation(+,-,*,/): ");
    scanf("%c",&y);
    printf("Enter  number a and b: ");
    scanf("%d%d",&a,&b);
    
    switch(y)
    {
        case '+':
        printf("The sum:%d",a+b);
        break;
        
        case '-':
        printf("The difference:%d",a-b);
        break;
        
        case '*':
        printf("The product:%d ",a*b);
        break;
        
        case '/':
        printf("The division:%f",(float)a/b);
        break;
        
        
    }
    return 0;
}
