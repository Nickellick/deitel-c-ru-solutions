#include <stdio.h>

int main() {
    int counter = 0;
    int number = 0;
    int largest = 0;
    while (counter < 10) {
        fputs("Enter number: ", stdout);
        scanf("%d", &number);
        largest = number > largest ? number : largest;
        counter++;
    }
    printf("The largest number is: %d\n", largest);
}