#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/*int A[9];
	int B[20];
	int max, cnt = 0;*/

	//for (int i = 0; i < 9; i++)
	//{
	//	scanf("%d", &A[i]);
	//}
	//                                                                                                                                                                                                                                                                                                         
	//max = A[0];

	//for (int i = 0; i < 9; i++)
	//{
	//	if (max < A[i])
	//	{
	//		max = A[i];
	//		B[cnt] = i;
	//		cnt++;
	//	}
	//}
	//
	//if (cnt == 0)
	//{
	//	printf("max = %d\n", max);
	//	printf("1\n");
	//}

	//else
	//{
	//	printf("max = %d\n", max);
	//	printf("%d\n", B[cnt - 1] + 1); //인덱스는 0번부터 시작하므로
	//}

	int n, max = 0, maxIdx;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &n);
		if (max < n) {
			max = n;
			maxIdx = i;
		}
	}

	printf("%d\n%d", max, maxIdx + 1);

	return 0;
}