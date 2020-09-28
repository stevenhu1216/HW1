#include<stdio.h>
#include<stdlib.h>

int main(void)
{	
	double w, h,bmi;
	printf("BMI VALUES\nUnderWeight:less than 18.5			\nNormal:     between 18.5~24.9\n");
	printf("overweight: between 25~29.9\n");
	printf("obese:      30 or greater\n");
	printf("WeightInKilograms=\n");
	scanf_s("%lf", &w);
	printf("HeightInMeters=\n");
	scanf_s("%lf", &h);
	bmi = w / (h * h);
	printf("BMI=%.2f", bmi);
	system("pause");
	return 0;
}