#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	double a,b; //가로,세로


	printf("가로 : ");
	scanf("%lf", &a);

	b = (int)(((double)4 / (double)3) * a);

	printf("세로의 길이 : %lf", b);

	return 0;
}