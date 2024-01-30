#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void f(int x,int y)
{
	
	int x1, x2, x3, x4;


	x1 = x * y % 100;
	x /= 10;


	x2 = x * y % 10;
	x /= 10;

	x3 = x * y % 1;


	x4 = x1 + (x2 * 10) + (x3 * 100);


	printf("%d\n", x1);

	printf("%d\n", x2);

	printf("%d\n", x3);

	printf("%d\n", x4);

}

int main(void)
{
	int x, y;

	scanf("%d %d", &x, &y);


	f(x,y);


	return 0;

}
