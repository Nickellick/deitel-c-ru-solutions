#include <stdio.h>

int main() {
    int a, b;
    puts("Enter two numbers in format \"%d %d\"");
    scanf("%d %d", &a, &b);
    printf("The sum is %d\n", a + b);
    printf("The product is %d\n", a * b);
    printf("The difference is %d\n", a - b);
    printf("The quotient is %d\n", a / b);
    printf("The modulo is %d\n", a % b);
}