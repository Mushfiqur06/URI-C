#include<stdio.h>

int main()
{
    int time;
    double distance,totalFuel;

    scanf("%d %lf",&time,&distance);
    totalFuel = (time * 1.0 * distance) / 12;
    printf("%.3lf\n",totalFuel);

    return 0;
}
