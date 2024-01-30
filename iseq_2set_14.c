#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 30


int main(void)
{
	int A[5] = { 5000,6000,7000,100000,20000 }; //코드별 가격 저장 배열
	int B[N][3] = { 0 }; //3개의 코드 번호 입력받을 배열, 입력받은 코드번호를 A배열의 인덱스 삼아 대입해서 푸는게 핵심
	int S[N]; //합을 저장할 배열
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