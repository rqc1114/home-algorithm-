#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void function(int* _x,int* _y)
{

}


int main(void)
{
	int w, h, p, q;
	int x, y, dx = +1, dy = +1;
	int t;
	const int theta;

	scanf("%d %d", &w, &h);
	scanf("%d %d", &p, &q);
	scanf("%d", &t);


	while (1)
	{
		if (t == 0)
		{
			printf("%d %d\n", x, y);
			break;
		}

		x+=dx, y+=dy;
		t--;

		if (x >= w || y >= h)
		{
			if (theta == 0)
			{
				dx = -1, dy = +1;
			}
			else if(theta == 30)
			{
				dx = -1, dy = -1;
			}

			else if (theta == 60)
			{
				dx = -1, dy = +1;
			}

			else if (theta == 90)
			{
				dx = +1, dy = +1;
			}
		}
	}

	return 0;
}
