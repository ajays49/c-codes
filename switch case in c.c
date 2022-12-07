
#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter a number between 0 to 49: ");
    scanf("%d", &y);
    x= y/10;
    switch(x)
    {
        case 0:
        printf("The number is in range 0-9 \n");
        break;
        
        case 1:
        printf("The number is in range 10-19 \n");
        break;
        
        case 2:
        printf("The number is in range 20-29 \n");
        break;
        
        case 3:
        printf("The number is in range 30-39 \n");
        break;
        
        case 4:
        printf("The number is in range 40-49 \n");
        break;
        
        default:
        printf("The number is not in given range \n");
    }
    return 0;
}
