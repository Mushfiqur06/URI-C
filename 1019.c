#include<stdio.h>

int main()
{
    int time,hour,minutes,second;
    scanf("%d",&time);

    hour = time / 3600;
    time = time % 3600;

    minutes = time / 60;
    time = time % 60;

    second = time;

    printf("%d:%d:%d\n",hour,minutes,second);

    return 0;
}
