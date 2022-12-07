#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);

    printf("the sum is:%d\n ",a+b);
    printf("the product is:%d\n ",a*b);
    printf("the difference is:%d\n ",a-b);
    printf("the division is:%f\n ",(float)a/b);
    printf("the division is:%d\n ",a%b);
    return 0;
}

