#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 100;

int main(void)
{
	int A[N];
	int i = 0, j;

	while (1)
	{
		scanf("%d", &A[i]);
		if (A[i] == 0)
			break;
		i++;
	}

	for (j = 1, j <= i; j++)
	{
		switch (A[j])
		{
		case 2: //�ϼ��� 28���� ��
			printf("%d - %d\n", A[j], 28);
			break;
		case 4: //�ϼ��� 30���� ��

		case 6:

		case 9:

		case 11:
			printf("%d - %d\n", A[j], 30);
			break;

		case ((A[j] < 0 || A[j] >12)) //case���ǽĿ� �̷��� �ټ� �ִ��� �𸣰�����, 0~12���̿� ���� ���� ��
				printf("%d - %d\n", A[j], 99);
				break;

		default : //�ϼ��� 31�� �� ������ ��
			printf("%d - %d\n", A[j], 31); 
			break;

		}
	}

	return 0;
}