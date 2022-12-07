#include <stdio.h>

int main()
{
    int a[5]={0,-1,11,100, 55},i;
    int x[]={200,-1,11,100, 55};
    int y[5]={3,4,-55};
    int s[5]={0};
    char b[5]={'a','e','i'};
    //int z[5]={1,2,3,4,5,6,7};
    //int a[5]={};
   
    
    for (i=0; i<5; i++)
        printf("%d\t",a[i]);
        printf("\n");
        
    for (i=0; i<5; i++)
        printf("%d\t",x[i]);
        printf("\n");
    
    for (i=0; i<5; i++)
        printf("%d\t",y[i]);
        printf("\n");  
    
    for (i=0; i<5; i++)
        printf("%d\t",s[i]);
        printf("\n");
    
    for (i=0; i<5; i++)
        printf("%c\t",b[i]);
        printf("\n");
    return 0;
}

