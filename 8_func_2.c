#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer()
{
	int value;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &value);
	return value;
}

int get_max(int x,int y)
{
	if (x > y) return(x);
	else return (y);
}

int main(void)
{
	int a, b;

	a = get_integer();
	b = get_integer();

	printf("�μ� �߿��� ū ���� %d�Դϴ�.\n", get_max(a, b));

	return 0;
}