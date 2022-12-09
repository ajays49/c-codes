
#include <stdio.h>

int main()
{
    int i,j;
    int a[4][3] ={{1,2,3},{11,12,13},{4,5,6},{17,18,19}};
    for (i=0;i<4;i++)//access rows
    {
       for (j=0;j<3;j++)//access columns
       {
          printf("%d", a[i][j]);
          printf("\t");
       }
       printf("\n");
    }

    return 0;
}

