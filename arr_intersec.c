#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define M 5
#define N 7

/* Find intersection of two sets */
int main(void)
{
	system("chcp 1251 > nul");
	
	int A[M]={2,4,8,16,32};
	int B[N]={1,2,3,5,8,13,21};

	int i,j,size;
	bool state;

	// Display the first array
	printf("A[%d]={",M); 
	for (i=0;i<M-1;i++){
		printf("%d, ", A[i]);
	}
	printf("%d}\n", A[M-1]);

	// Display the second array
	printf("B[%d]={",N);
	for (i=0;i<N-1;i++){
		printf("%d, ", B[i]);
	}
	printf("%d}\n", B[i]);

	// Initialize interim arrays
	int *p, *q;
	size=M;
	p=malloc(size*sizeof(int));
	q=malloc(size*sizeof(int));
	for (i=0;i<M;i++) {
		p[i]=A[i];
		q[i]=A[i];
	}
	
	// Compare original arrays
	for (i=0;i<N;i++) {
		state=1;		
		
		// Check if the val of the longest array is not present in the shorter array
		for (j=0;j<M;j++) {
			if (B[i] == A[j]) {
				//printf("B[%d] = %d\n", i, B[i]);
				state=0;
				break;
			}
		}
		
		// Add the unique val to the result array
		if (state) {
			free(p);
		
			size+=1;
			p=malloc(size*sizeof(int));
			for (j=0;j<size-1;j++) {
				p[j] = q[j];
				//printf("  p[%d] = %d\n", j, p[j]);
			}
			p[j] = B[i];
			
			free(q);
			q=malloc(size*sizeof(int));
			for (j=0;j<size;j++) {
				q[j] = p[j];
			} 
		}
	}
	
	// Display the result array
	printf("C[%d]={", size);
	for (i=0;i<size-1;i++) {
		printf("%d, ", p[i]);
	}
	printf("%d}\n", p[i]);

	free(p);
	free(q);

	system("pause > nul");

	return 0;
}
