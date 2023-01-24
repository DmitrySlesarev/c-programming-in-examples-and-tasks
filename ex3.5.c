#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  double num;
  
  double *pnt;
  
  double **q;
  
  pnt=&num;
  
  q = &pnt;
  
  printf("num address:\t%p\n", &num);
  printf("pnt address:\t%p\n", &pnt);
  printf("q address:\t%p\n", &q);
  
  printf("Check: %p = %p = %p\n", &num, pnt, *q);
  
  printf("mem size for num:\t%lu\n", sizeof(num));
  printf("mem size for pnt:\t%lu\n", sizeof(pnt));
  printf("mem size of q:\t%lu\n", sizeof(q));
  
  **q=1.234567;
  
  printf("num value:\t%f\n", num);
  printf("Check: %f = %f = %f\n", num, *pnt, **q);
  
  return 0;
}
