#include <stdio.h>

int main() {
    int a, b, c, d, e, largest, smallest;
    fputs("Enter five different integers: ", stdout);
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    largest = a;
    smallest = a;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }
    if (d > largest) {
        largest = d;
    }
    if (e > largest) {
        largest = e;
    }
    if (b < smallest) {
        smallest = b;
    }
    if (c < smallest) {
        smallest = c;
    }
    if (d < smallest) {
        smallest = d;
    }
    if (e < smallest) {
        smallest = e;
    }
    printf("The largest is %d\n", largest);
    printf("The smallest is %d\n", smallest);
}