#include<stdio.h>

int main()
{
	int X;
	float Y,totalFuel;
	scanf("%d %f",&X,&Y);
	totalFuel = X / Y;
	printf("%.3f km/l\n",totalFuel);

	return 0;
}
