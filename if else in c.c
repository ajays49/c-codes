#include <stdio.h>

int main()
{
    int x, y, sum;
    printf("Enter the value of x and y \n");
    scanf("%d%d", &x, &y);
    sum= x+y;
    printf("Sum of a and y is %d\n", sum);
    if (sum>20)
    {
        printf("The sum is greater than 20 \n");
    }
    else if (sum>10)
    {
        printf("The sum is greater than 10 and > 20 \n");
    }
    else
    {
        printf("The sum is less than 10");
    }
    return 0;
}
