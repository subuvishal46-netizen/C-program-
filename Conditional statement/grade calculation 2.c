#include <stdio.h>

int main() {
    float physics, chemistry, biology, mathematics, computer;
    float total, average;

    scanf("%f", &physics);
    scanf("%f", &chemistry);
    scanf("%f", &biology);
    scanf("%f", &mathematics);
    scanf("%f", &computer);

    total = physics + chemistry + biology + mathematics + computer;
    average = total / 5;

    printf("Average = %.2f\n", average);

    if (average >= 90) {
        printf("Grade: A\n");
    }
    else {
        if (average >= 80) {
            printf("Grade: B\n");
        }
        else {
            if (average >= 70) {
                printf("Grade: C\n");
            }
            else {
                if (average >= 60) {
                    printf("Grade: D\n");
                }
                else {
                    if (average >= 50) {
                        printf("Grade: E\n");
                    }
                    else {
                        printf("Grade: F\n");
                    }
                }
            }
        }
    }

    return 0;
}
