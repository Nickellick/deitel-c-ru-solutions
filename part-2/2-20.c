#include <stdio.h>

int main() {
    float PI = 3.14159;
    int radius;
    fputs("Enter radius: ", stdout);
    scanf("%d", &radius);
    printf("Perimeter: %f\n", 2 * PI * radius);
    printf("Area: %f\n", PI * radius * radius);    
}