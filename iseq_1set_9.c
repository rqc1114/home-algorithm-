#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int a,q,i;
	int sum=0;

	printf("입력 : ");
	scanf("%d", &a);

	q = a / 3; //3으로 나눈 몫이(3 * q가) 그 수보다 작은 수중 가장큰 3의 배수이므로 


	for (i = 1; i <= q; i++)
	{
		sum += (3 * i);
	}

	printf("%d", sum);

	return 0;
}