#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 140


int main(void)
{
	int a, b, s; //�ʱ� �ǽ� ����

	scanf("%d %d", &a, &b);

	s = a + b;

	if (s >= N)
	{
		printf("%d �հ�\n",s);
	}

	else
	{
		printf("%d ���հ�", s);
	}

	return 0;
}