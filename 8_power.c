#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer()
{
	int value;
	printf("정수를 입력하시오 : ");
	scanf("%d", &value);
	return value;
}

int power(int x, int y)
{
	int n=1,i;

	for (i = 1; i <= y; i++)
	{
		n *= x;
	}

	return
}

int main(void)
{
	int x,y;


	return 0;
}