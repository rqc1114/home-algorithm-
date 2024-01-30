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
		case 2: //일수가 28일인 달
			printf("%d - %d\n", A[j], 28);
			break;
		case 4: //일수가 30일인 달

		case 6:

		case 9:

		case 11:
			printf("%d - %d\n", A[j], 30);
			break;

		case ((A[j] < 0 || A[j] >12)) //case조건식에 이런값 줄수 있는진 모르겠지만, 0~12사이에 있지 않은 수
				printf("%d - %d\n", A[j], 99);
				break;

		default : //일수가 31일 인 나머지 달
			printf("%d - %d\n", A[j], 31); 
			break;

		}
	}

	return 0;
}