#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num[11] = {0,1,2,3,4,5,6,7,8,9,10}, i;
	printf("number	square	cube\n");
	for (i = 0; i < 11; i++)
	{
		printf("%d	%d	%d\n",num[i],(num[i]*num[i]),(num[i]*num[i]* num[i]));
	}
	system("pause");
	return 0;
}