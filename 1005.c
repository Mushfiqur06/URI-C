#include<stdio.h>

int main()
{
    double A, B, average; // Initialize variable
    scanf("%lf %lf",&A,&B); // Take input

    average = ((A * 3.5) + (B * 7.5)) / (3.5 + 7.5); // Find the average with weight
    printf("MEDIA = %.5lf\n", average); // Output that average value

    return 0;
}
