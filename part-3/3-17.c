#include <stdio.h>

int main() {
    float mileage = 0;
    int distance;
    float curr_mile_per_gallon = 0;
    float sum_mile_per_gallon = 0;
    int count_mile_per_gallon = 0;
    while ((int)mileage != -1) {
        fputs("Enter gasoline mileage (-1 if input is complete): ", stdout);
        scanf("%f", &mileage);
        if ((int)mileage != -1) {
            fputs("Enter the distance traveled: ", stdout);
            scanf("%d", &distance);
            curr_mile_per_gallon = (float)distance / mileage;
            sum_mile_per_gallon += curr_mile_per_gallon;
            count_mile_per_gallon += 1;
            printf("For this gas station miles per gallon is %f\n\n", curr_mile_per_gallon);
        }
    }
    printf("\nAverage count of miles per gallon: %f\n", sum_mile_per_gallon / count_mile_per_gallon);

    
}