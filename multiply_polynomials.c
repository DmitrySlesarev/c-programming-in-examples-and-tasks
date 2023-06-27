#include <stdio.h>
#include <stdlib.h>

#define M 5
#define N 7

/* Find math product of two polynomials */
int main(void)
{
  system("chcp 1251 > nul");
  
  int A[M+1] = {1,5,7,-1,0,1};
  int B[N+1] = {-1,2,3,1,2,-1,1,2};
  int R[M+N+1];
  
  int i,j;
  
  for (i=0;i<=N+M;i++) {
    R[i]=0;
  }
  
  // Display the first polynomial
  for (i=0;i<=M;i++) {
    printf("|%3d ", A[i]);
  }
  printf("|\n");
  
  // Display the second polynomial
  for (i=0;i<=N;i++) {
    printf("|%3d ", B[i]);
  }
  printf("|\n");
  
  // Multiply the first polynomial by the second
  for (i=0; i<=M; i++) {
    for (j=0; j<=N; j++) {
      R[j+i]+= A[i] * B[j];
    }
  }
  
  // Display the result polynomial
  for (i=0;i<=M+N;i++) {
    printf("|%3d ", R[i]);
  }
  printf("|\n");
  
  system("pause > nul");  
  
  return 0;
}
