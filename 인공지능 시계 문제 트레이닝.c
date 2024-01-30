#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int h, m, s;
	int x;

	int x1;
	int h1, m1, s1;

	scanf("%d %d %d", &h, &m, &s);
	scanf("%d", &x);

	x1 = h + m + s + x;


	h1 = x1 / 60 * 60; x1 = x1 % (60*60);


	m1 = x1 / 60; x1 = x1 % 60;
	
	s1 = x1;


	printf("%d %d %d\n", h1, m1, s1);



	return 0;
}
