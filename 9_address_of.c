#include <stdio.h>

int main(void)
{
	int i = 10;
	char c = 69;
	double f = 12.3;

	printf("i���ּ� = %p\n", &i);
	printf("c���ּ� = %p\n", &c);
	printf("f���ּ� = %p\n", &f);

	return 0;
}