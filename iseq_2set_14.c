#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 30


int main(void)
{
	int A[5] = { 5000,6000,7000,100000,20000 }; //�ڵ庰 ���� ���� �迭
	int B[N][3] = { 0 }; //3���� �ڵ� ��ȣ �Է¹��� �迭, �Է¹��� �ڵ��ȣ�� A�迭�� �ε��� ��� �����ؼ� Ǫ�°� �ٽ�
	int S[N]; //���� ������ �迭
	int i = 0,j = 0,k=0;

	while (1)
	{
		scanf("%d %d %d", B[i][0], B[i][1], B[i][2]);
		if (B[i][0] == 0 && B[i][1] == 0 && B[i][2] == 0)
			break;
		i++;
	}


	for (j = 0; j < i; j++)
	{
		S[j] = ( A[B[j][0] - 1] + (A[B[j][1] - 1]) + (A[B[j][2] - 1]) );
	}

	for (k = 0; k < i; k++)
	{
		printf("%d\n", S[k]);
	}


	return 0;
}