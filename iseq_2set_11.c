#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 140


int main(void)
{
	int a, b, s; //필기 실시 총점

	scanf("%d %d", &a, &b);

	s = a + b;

	if (s >= N)
	{
		printf("%d 합격\n",s);
	}

	else
	{
		printf("%d 불합격", s);
	}

	return 0;
}