#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int A[5];
	int s=0,n;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &A[i]);
		s += pow(A[i], 2);
	}

	n = s % 10;

	printf("%d\n", n);

	return 0;
}