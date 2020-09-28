#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num;
	printf("Please give me an integer\n");
	printf("And I will tell you whether it's odd or even\n");
	printf("num=");

	scanf_s("%d", &num);
	if (num % 2 == 0)
	{
		printf("%d is an even",num);
	}
	else
	{
		printf("%d is an odd", num);
	}
	system("pause");
	return 0;
}