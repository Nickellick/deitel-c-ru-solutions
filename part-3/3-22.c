#include <stdio.h>

int main() {
    int a = 5;
    /* Post-decrement */;
    printf("Default value of number (berfore post-decrement): %d\n", a);
    printf("Value of variable in post-decrement: %d\n", a--);
    printf("Final value: %d\n\n", a);

    /* Pre-decrement */
    a = 5;
    printf("Default value of number (berfore pre-decrement): %d\n", a);
    printf("Value of variable in pre-decrement: %d\n", --a);
    printf("Final value: %d\n", a);
}