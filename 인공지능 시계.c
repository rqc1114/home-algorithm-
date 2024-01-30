#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct time
{
	int h;
	int m;
	int s;
}Time;

int main(void)
{
	Time t0;
	Time t;
	int n;
	int x;

	scanf("%d %d %d",t0.h,t0.m,t0.s);
	scanf("%d", &n);
	x = n + (t0.h * 60 * 60) + (t0.m * 60) + (t0.s);


	t.h = x % (24 * 60 * 60);
	x = x % (24 * 60 * 60);
	t.m = x % (60);
	x = x % 60;
	t.s = x;

	printf("%d %d %d\n", t.h,t.m,t.s);

	return 0;

}
