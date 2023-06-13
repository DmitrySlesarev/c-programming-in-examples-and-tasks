#include <stdio.h>
#include <stdlib.h>

#define SIZE 12

/* Bubble sorting */
int main(void)
{
  system("chcp 1251 > nul");
  
  int i,j,k;
  
  int arr[SIZE];
  
  srand(5);
  
  puts("Initial array:");
  for (i=0;i<SIZE;i++) {
    arr[i] =  rand() % 21 - 10;
    printf("| %3d ", arr[i]);
  }

  printf("|\n");
  
  for (j=1;j<SIZE;j++) {
    for (i=0;i<SIZE;i++) {
      if ( arr[i] > arr[i+1]) {
        k = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = k;
      }
    }
  }
  
  printf("\n");
  
  puts("Sorted array:");
  for (i=0;i<SIZE;i++) {
    printf("| %3d ", arr[i]);
  }
  
  printf("|\n");
  
  system("pause > nul");
  
  return 0;
  
}
