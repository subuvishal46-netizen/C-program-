#include <stdio.h>

int main() {
    int month;

    scanf("%d", &month);

    if (month >= 1 && month <= 12) {

        if (month == 1 || month == 3 || month == 5 || month == 7 || 
            month == 8 || month == 10 || month == 12) {
            printf("Days: 31\n");
        }
        else {
            if (month == 4 || month == 6 || month == 9 || month == 11) {
                printf("Days: 30\n");
            }
            else {
                printf("Days: 28\n");
            }
        }

        if (month >= 1 && month <= 3) {
            printf("Quadrant: 1\n");
        }
        else {
            if (month >= 4 && month <= 6) {
                printf("Quadrant: 2\n");
            }
            else {
                if (month >= 7 && month <= 9) {
                    printf("Quadrant: 3\n");
                }
                else {
                    printf("Quadrant: 4\n");
                }
            }
        }

    }
    else {
        printf("Invalid month number\n");
    }

    return 0;
}
