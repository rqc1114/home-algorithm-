#include <stdio.h>

int main(void)
{
	int number = 10;
	int* p;

	printf("���� number�� �� = %d\n", number);

	*p = 20;

	printf("���� number�� �� = %d\n", number);
	
	return 0;
}