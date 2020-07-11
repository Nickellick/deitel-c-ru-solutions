#include <stdio.h>

int main() {
    float PERCENT = 0.09;
    int SALARY = 200;
    float sales = 0;
    while ((int)sales != -1) {
        fputs("Enter total amount of sales in dollars (-1 if input is complete): ", stdout);
        scanf("%f", &sales);
        if ((int)sales != -1) {
            printf("Salary: $%.2f\n", (float)SALARY + sales * PERCENT);
        }
        puts("");
    }
}