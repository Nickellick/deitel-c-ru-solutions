#include <stdio.h>

int main() {
    float principal = 0;
    float rate = 0;
    int days = 0;
    int DAYS_IN_YEAR = 365;
    while ((int)principal != -1) {
        fputs("Enter principal (-1 if input is complete): ", stdout);
        scanf("%f", &principal);
        if ((int)principal != -1) {
            fputs("Enter rate: ", stdout);
            scanf("%f", &rate);
            fputs("Enter days: ", stdout);
            scanf("%d", &days);
            printf("Interest payout: $%.2f\n", principal * rate * (float)days / DAYS_IN_YEAR);
        }
        puts("");
    }
}