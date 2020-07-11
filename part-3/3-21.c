#include <stdio.h>

int main() {
    int hours = 0;
    float hourly_rate = 0;
    int NORMAL_HOURS = 40;
    float NORMAL_COEFF = 1;
    float CRUNCH_COEFF = 1.5;
    float salary = 0;
    while (hours != -1) {
        fputs("Enter the # hours worked: ", stdout);
        scanf("%d", &hours);
        if (hours != -1) {
            fputs("Enter hourly employee rate ($00.00): ", stdout);
            scanf("%f", &hourly_rate);
            salary = hours > 40 ? NORMAL_HOURS * hourly_rate * NORMAL_COEFF + ((hours - NORMAL_HOURS) * hourly_rate * CRUNCH_COEFF) : hours * hourly_rate * NORMAL_COEFF;
            printf("Payout is $%.2f\n", salary);
        }
        puts("");
    }
}