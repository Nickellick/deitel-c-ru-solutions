#include <stdio.h>

int main() {
    int num;
    fputs("Enter digits: ", stdout);
    scanf("%d", &num);
    printf("%d   %d   %d   %d   %d\n", num / 10000, num % 10000 / 1000, num % 1000 / 100, num % 100 / 10, num % 10);
}