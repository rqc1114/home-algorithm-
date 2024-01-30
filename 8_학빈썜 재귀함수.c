#include <stdio.h>

void q1(int n)
{
	if (n >= 5)return;
	q1(n + 1);
	q1(n + 2);
}

int main()
{
	q1(1);
}
