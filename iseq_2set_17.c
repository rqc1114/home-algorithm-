#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

#define N 100

//#define abs(x) x*= -1; //매크로로 함수 쓰는법 모르겠음 abs함수 매크로로 짜면됨

int main(void)
{
	int A[100],s=0; //입력값 저장할 배열, 입력한 수들의 절댓값 합을 누적할 변수
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