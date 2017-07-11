#include<stdio.h>

int main()
{
    double A, R, n = 3.14159; // Initialize variable
    scanf("%lf",&R); //Take input

    A = n * (R * R); // A = π . R**2
    printf("A=%.4lf\n",A);

    return 0;
}
