#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	system("chcp 1251>nul");

	void *pnt;

	int number;

	pnt=&number;

	*((int *)pnt)=1<<8;

	int bites=(int)sizeof(number);

	*((char *)pnt)=3;

	int k;

	for (k=1;k<=bites;k++) {
		printf("The %d bite has value %d\n", k,((char*)pnt)[k-1]);
	}

	return 0;
}
