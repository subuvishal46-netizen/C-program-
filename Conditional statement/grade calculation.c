#include <stdio.h>

int main() {
    float m1, m2, m3, m4, m5, m6;
    float total, percentage;

    scanf("%f", &m1);
    scanf("%f", &m2);
    scanf("%f", &m3);
    scanf("%f", &m4);
    scanf("%f", &m5);
    scanf("%f", &m6);

    total = m1 + m2 + m3 + m4 + m5 + m6;
    percentage = (total / 600) * 100;

    if (percentage >= 95) {
        printf("Grade: A\n");
    }
    else {
        if (percentage >= 85) {
            printf("Grade: B\n");
        }
        else {
            if (percentage >= 75) {
                printf("Grade: C\n");
            }
            else {
                if (percentage >= 65) {
                    printf("Grade: D\n");
                }
                else {
                    if (percentage >= 45) {
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
