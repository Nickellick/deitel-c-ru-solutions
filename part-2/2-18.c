#include <stdio.h>

int main() {
    int a, b;
    puts("Enter two numbers in format \"%d %d\"");
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("Number %d is larger\n", a);
    } else if (a < b) {
        printf("Number %d is larger\n", b);
    } else {
        puts("These numbers are equal");
    }
}