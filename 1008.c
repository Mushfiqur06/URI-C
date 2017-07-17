
#include <stdio.h>


int main() {
    // Initialize variable
    int employNumber, hoursOfWork;
    double amountPerHour, salary;

    scanf("%d %d %lf", &employNumber, &hoursOfWork, &amountPerHour);// Take input
    salary = hoursOfWork * amountPerHour;

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", employNumber, salary);

    return 0;
}
