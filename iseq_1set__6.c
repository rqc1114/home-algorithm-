#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	double a,b; //����,����


	printf("���� : ");
	scanf("%lf", &a);

	b = (int)(((double)4 / (double)3) * a);

	printf("������ ���� : %lf", b);

	return 0;
}