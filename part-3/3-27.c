#include <stdio.h>

int main() {
    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int student = 1;
    int result;

    while (student <= 10) {
        printf("Enter result ( 1=pass, 2=fail): ");
        scanf("%d", &result);
        while (result != 1 && result != 2) {
            fputs("Incorrect input. Try again: ", stdout);
            scanf("%d", &result);
        }
        if (result == 1) {
            passes = passes + 1;
        } else {
            failures = failures + 1;
        }
        student = student + 1;
    }
    printf("Passed %d\n", passes);
    printf("Failed %d\n", failures);

    if (passes > 8) {
        puts("Bonus to instructor");
    }
    return 0;
}