#include <stdio.h>

int main()  
{  
    int m, n, i, j, k,x,y,s=0, a[100][100], v[100][100], z[100][100];  
    printf("number of rows and columns of a\n");  
    scanf("%d%d", & m, & n);  
    printf("number of rows and columns of v\n");  
    scanf("%d%d", & x, & y);
    printf("elements of a\n");  
    for (i = 0; i < m; i++)  
        for (j = 0; j < n; j++) 
            scanf("%d", & a[i][j]);  
    printf(" elements of v\n");  
    for (i = 0; i < x; i++)  
        for (j = 0; j < y; j++) 
            scanf("%d", & v[i][j]);
    if(n==x)
    {
        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < y; j++)  
            { 
                z[i][j]=0;
                for (k = 0; k < x; k++)
                {
                    z[i][j]+= a[i][k] * v[k][j];
                }
            }  
            printf("\n");  
        }  
        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < y; j++) 
                printf("%d\t", z[i][j]); 
            printf("\n");
        }
    }
    else
    {
        printf("invalid cant multiply");
    }
    return 0;  
}  






