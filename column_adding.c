#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

/* Display how to sum 2 values */
int main(void)
{
  int a,b,x,y,k;
  
  printf("Enter the first value: ");
  scanf("%d", &a);
  
  printf("Enter the second value: ");
  scanf("%d", &b);
  
  x = a;
  y = b;
  
  int A[SIZE];
  int B[SIZE];
  int C[SIZE];
  
  // Fill in the arrays
  for (k=SIZE-1; k>=0; k--) {
    A[k]=a%10;
    a/=10;
    B[k]=b%10;
    b/=10;
    C[k]=A[k]+B[k];
  }
  
  // Adjust the result's array
  for (k=SIZE-1; k>=1; k--) {
    C[k-1]+=C[k]/10;
    C[k]%=10;
  }
  
  // Print the first val
  for (k=0;k<SIZE;k++) {
    printf("| %d ", A[k]);
  }
  
  printf("|\n+\n");
  
  // Print the second val
  for (k=0;k<SIZE;k++) {
    printf("| %d ", B[k]);
  }
  
  printf("|\n-----------------------------------------\n");
  
  // Print the result
  for (k=0;k<SIZE;k++) {
    printf("| %d ", C[k]);
  }
  
  printf("|\nThe result's check: %d + %d = %d\n", x,y,x+y);
  
  return 0;
}
