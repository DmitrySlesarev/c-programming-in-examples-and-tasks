#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	void *pnt;

	int num;
	double x;
	char symb;

	pnt=&num;
	*((int *)pnt)=100500;
	printf("Integer: \t%d\n", num);

	pnt=&x;
	*((double *)pnt)=1.2344567;
	printf("Float: \t%f\n", x);

	pnt=&symb;
	*((char *)pnt)='L';
	printf("Character: \t%c\n", symb);  

	return 0;
}
