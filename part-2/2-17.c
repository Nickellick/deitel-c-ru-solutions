#include <stdio.h>

int main() {
    int a, b;
    puts("First way:");
    printf("%s\n", "1 2 3 4");
    puts("Second way:");
    printf("%d %d %d %d\n", 1, 2, 3, 4);
    puts("Third way:");
    printf("%s", "1 ");
    printf("%s", "2 ");
    printf("%s", "3 ");
    printf("%s", "4\n");
}