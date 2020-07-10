#include <stdio.h>

int main() {
    int a, b;
    fputs("Enter two different integers: ", stdout);
    scanf("%d %d", &a, &b);
    printf("First number is %sa multiple of the second\n", a % b == 0 && a > b ? "" : "not ");
}