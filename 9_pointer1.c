#include <stdio.h>

int main(void)
{
	int number = 10;
	int* p;

	p = &number;

	printf("���� number�� �ּ� = %p\n", &number);
	printf("�������� �� = %p\n", p);
	printf("���� number�� �� = %d\n", number);
	printf("�����Ͱ� ����Ű�� �� = %d\n", *p);

	return 0;
}