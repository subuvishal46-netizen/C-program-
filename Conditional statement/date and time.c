#include <stdio.h>

int main() {
    int steps, time;

    scanf("%d", &steps);
    scanf("%d", &time);

    if (steps >= 10000 && time >= 60) {
        printf("Fitness Level: Excellent\n");
    }
    else {
        if (steps >= 8000 && time >= 45) {
            printf("Fitness Level: Good\n");
        }
        else {
            if (steps >= 5000 && time >= 30) {
                printf("Fitness Level: Average\n");
            }
            else {
                printf("Fitness Level: Poor\n");
            }
        }
    }

    return 0;
}
