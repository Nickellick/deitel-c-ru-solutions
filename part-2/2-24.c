#include <stdio.h>

int main() {
    int num;
    fputs("Enter the number: ", stdout);
    scanf("%d", &num);
    printf("The number is %s\n", num % 2 == 0 ? "even" : "odd");
}