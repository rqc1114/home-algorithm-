#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 140


int main(void)
{
	int a, b, c , s, avg; //�� �� �� ���� ���

	scanf("%d %d %d", &a, &b, &c);

	s = a + b + c ;
	avg = s / 3;

	printf("%d %d ", s, avg);


	switch (avg / 10) 
	{
	case 10:
		printf("��\n");
		break;
	case 9:
		printf("��\n");
		break;
	case 8:
		printf("��\n");
		break;
	case 7:
		printf("��\n");
		break;
	case 6:
		printf("��\n");
		break;
	default:
		printf("��\n");
		break;
	}

	return 0;
}