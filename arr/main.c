#include <stdio.h>
#include <stdlib.h>

/* PP 3.37 Array dimemsion   */

#define M 5
#define N 7

int mat1[M][N];
int mat2[N][M];


int sum_element(i, j)
{
  return mat1[i][j] + mat2[j][i];

}

