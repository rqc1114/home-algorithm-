#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 140


int main(void)
{
	int a, b, c , s, avg; //국 영 수 총점 평균

	scanf("%d %d %d", &a, &b, &c);

	s = a + b + c ;
	avg = s / 3;

	printf("%d %d ", s, avg);


	switch (avg / 10) 
	{
	case 10:
		printf("수\n");
		break;
	case 9:
		printf("수\n");
		break;
	case 8:
		printf("우\n");
		break;
	case 7:
		printf("미\n");
		break;
	case 6:
		printf("양\n");
		break;
	default:
		printf("가\n");
		break;
	}

	return 0;
}