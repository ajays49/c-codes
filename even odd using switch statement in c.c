
#include <stdio.h>

int main()
{
   int a,b;
   printf("enter the number to be checked: ");
   scanf("%d",&a);
   b=a%2;
   switch(b)
   {
        case 0:
        printf("the number %d is even",a);
        break;
        case 1:
        printf("the number %d is odd",a);
        break;
   }
   return 0;
}



