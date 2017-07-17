#include<stdio.h>

int main() {
    // Initialize variable
    double R;
    double pi = 3.14159;
    // Take input
    scanf("%lf",&R);
    // Find sphere
    double sphere = (4 / 3.0) * pi * (R * R * R);
    // Output that sphere
    printf("VOLUME = %.3lf\n", sphere);
    return 0;
}
