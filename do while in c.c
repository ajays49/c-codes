
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    i = 1;
    do
    {
        sum += i;
        printf("%d\n", sum);
        ++i;
    }
    while (i <= n);
    printf("Sum = %d", sum);
    return 0;
}
