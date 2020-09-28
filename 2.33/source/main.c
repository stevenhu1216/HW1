#include<stdio.h>
#include<stdlib.h>

int main(void)
{	
	int a, b, c, d, e,sum;
	printf("total miles driven per day:\n");
	scanf_s("%d", &a);
	printf("cost per gallen of gasoline:\n");
	scanf_s("%d", &b);
	printf("average miles per gallon:\n");
	scanf_s("%d", &c);
	printf("parking fees all day:\n");
	scanf_s("%d", &d);
	printf("tolls all day:\n");
	scanf_s("%d", &e);
	sum = a + b + c + d + e;
	printf("totall=%d\n\n", sum);

	system("pause");
	return 0;
}