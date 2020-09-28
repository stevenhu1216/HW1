#include<stdio.h>
#include<stdlib.h>

int main(void)
{	
	int num1, num2, num3;
	printf("請輸入三個數字\n");
	printf("num1=");
	scanf_s("%d", &num1);
	printf("num2=");
	scanf_s("%d", &num2);
	printf("num3=");
	scanf_s("%d", &num3);

	if (num1 == num2 == num3)
	{
		printf("all numbers are equal \n");
	}
	
	
	if (num1 > num2 && num2 > num3)
	{
		printf("the largest number is\n ");
		printf("%d", num1);
		printf("\nthe smallest number is \n");
		printf("%d", num3);
	}
	if (num1 > num3 && num3> num2)
	{
		printf("the largest number is\n ");
		printf("%d", num1);
		printf("\nthe smallest number is \n");
		printf("%d", num2);
	}
	if (num2 > num1 && num1 > num3)
	{
		printf("the largest number is \n");
		printf("%d", num2);
		printf("\nthe smallest number is \n");
		printf("%d", num3);
	}
	if (num2 > num3 && num3 > num1)
	{
		printf("the largest number is \n");
		printf("%d", num2);
		printf("\nthe smallest number is \n");
		printf("%d", num1);
	}
	if (num3 > num1 && num1 > num2)
	{
		printf("the largest number is\n ");
		printf("%d", num3);
		printf("\nthe smallest number is \n");
		printf("%d", num2);
	}
	if (num3 > num2 && num2 > num1)
	{
		printf("the largest number is \n");
		printf("%d", num3);
		printf("\nthe smallest number is \n");
		printf("%d", num1);
	}
	
	system("pause");
	return 0;
}