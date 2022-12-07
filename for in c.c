#include <stdio.h>


int main()
{
    int i,j;
    // cond1
    for(i=0,j=2 ;i<=5;i++, j++)
        printf("%d %d\n", i, j);

  
    //cond2
    for(i=0,j=2;(i<=7 && j<5); i++, j++)//and operator used
        printf("%d %d\n", i, j);
    return 0;
    
}

