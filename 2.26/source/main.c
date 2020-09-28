#include<stdio.h>
#include<stdlib.h>

int main(void)
{	
	int num1, num2;
	printf("Please give me two numbers\n");
	printf("And I will tell you whether the first is a multiple of the second\n");
	printf("first num1=");
	scanf_s("%d", &num1);
	printf("\nsecond num2=");
	scanf_s("%d", &num2);

	if (num1 % num2 == 0)
	{
		printf("the first is a multiple of the second");
	}
	else
	{
		printf("the first is NOT a multiple of the second");
	}
	system("pause");
	return 0;
}