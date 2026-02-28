#include <stdio.h>

int main() {
    int day;

    scanf("%d", &day);

    if (day >= 1 && day <= 7) {

        if (day == 1) {
            printf("Monday\n");
            printf("Weekday\n");
        }
        else {
            if (day == 2) {
                printf("Tuesday\n");
                printf("Weekday\n");
            }
            else {
                if (day == 3) {
                    printf("Wednesday\n");
                    printf("Weekday\n");
                }
                else {
                    if (day == 4) {
                        printf("Thursday\n");
                        printf("Weekday\n");
                    }
                    else {
                        if (day == 5) {
                            printf("Friday\n");
                            printf("Weekday\n");
                        }
                        else {
                            if (day == 6) {
                                printf("Saturday\n");
                                printf("Holiday\n");
                            }
                            else {
                                printf("Sunday\n");
                                printf("Holiday\n");
                            }
                        }
                    }
                }
            }
        }

    }
    else {
        printf("Invalid input\n");
    }

    return 0;
}
