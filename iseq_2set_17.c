#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define N 100

//#define abs(x) x*= -1; //��ũ�η� �Լ� ���¹� �𸣰��� abs�Լ� ��ũ�η� ¥���

int main(void)
{
	int A[100],s=0; //�Է°� ������ �迭, �Է��� ������ ���� ���� ������ ����
	int i = 0;
	int j;

	while (1)
	{
		scanf("%d", &A[i]);
		
		if (A[i] == 0)
			break;
		i++;
	}

	for (j = 1; j <= i; j++)
	{
		s += abs(A[j]);
	}

	printf("%d\n", s);

	return 0;
}