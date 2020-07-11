#include <stdio.h>

int main() {
    int account_number = 0;
    float balance;
    float expenditure;
    float credit;
    float credit_limit;
    while (account_number != -1) {
        fputs("Enter account number (-1 if input is complete): ", stdout);
        scanf("%d", &account_number);
        if (account_number != -1) {
            fputs("Enter starting balance: ", stdout);
            scanf("%f", &balance);
            fputs("Enter the total amount of expenses: ", stdout);
            scanf("%f", &expenditure);
            fputs("Enter the total amount of credit: ", stdout);
            scanf("%f", &credit);
            fputs("Enter credit limit: ", stdout);
            scanf("%f", &credit_limit);
            if (balance + credit > credit_limit) {
                printf("Account number: %d\n", account_number);
                printf("Credit limit: %.2f\n", credit_limit);
                printf("Balance: %.2f\n", balance + credit);
                puts("Credit limit exceeded");
            }
            puts("");
        }
    }
}