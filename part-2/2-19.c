#include <stdio.h>

int main() {
    int a, b, c, largest, smallest;
    fputs("Enter three different integers: ", stdout);
    scanf("%d %d %d", &a, &b, &c);
    printf("The sum is %d\n", a + b + c);
    printf("The average is %d\n", (a + b + c) / 3);
    largest = a;
    smallest = a;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }
    if (b < smallest) {
        smallest = b;
    }
    if (c < smallest) {
        smallest = c;
    }
    printf("The largest is %d\n", largest);
    printf("The smallest is %d\n", smallest);
}