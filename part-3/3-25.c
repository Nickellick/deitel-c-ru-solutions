#include <stdio.h>

int main() {
    int number = 1;
    puts("N\t10*N\t100*N\t1000*N");
    while (number <= 10) {
        printf("%d\t%d\t%d\t%d\n", number, 10 * number, 100 * number, 1000 * number);
        number++;
    }
}