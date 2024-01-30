#include <stdio.h>

int main(void)
{
	int i = 10;
	char c = 69;
	double f = 12.3;

	printf("i狼林家 = %p\n", &i);
	printf("c狼林家 = %p\n", &c);
	printf("f狼林家 = %p\n", &f);

	return 0;
}