#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int a,q,i;
	int sum=0;

	printf("�Է� : ");
	scanf("%d", &a);

	q = a / 3; //3���� ���� ����(3 * q��) �� ������ ���� ���� ����ū 3�� ����̹Ƿ� 


	for (i = 1; i <= q; i++)
	{
		sum += (3 * i);
	}

	printf("%d", sum);

	return 0;
}