#include <stdio.h>
 
int main()
{
  int r, n, c, d, a[100][100], b[100][100];
 
  printf("Enter the number of rows and columns of a matrix\n");
  scanf("%d%d", &r, &n);
  printf("Enter elements of the matrix\n");
 
  for (c = 0; c < r; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &a[c][d]);
 
  for (c = 0; c < r; c++)
    for (d = 0; d < n; d++)
      b[d][c] = a[c][d];
 
  printf("Transpose of the matrix:\n");
 
  for (c = 0; c < n; c++) {
    for (d = 0; d < r; d++)
      printf("%d\t", b[c][d]);
    printf("\n");
  }

  return 0;
}


