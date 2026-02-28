#include <stdio.h>

int main() {
    int month, year;

    scanf("%d", &month);

    if (month >= 1 && month <= 12) {

        if (month == 1) {
            printf("Month: January\nDays: 31\n");
        }
        else {
            if (month == 2) {
                printf("Month: February\n");
                scanf("%d", &year);

                if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
                    printf("Days: 29\n");
                }
                else {
                    printf("Days: 28\n");
                }
            }
            else {
                if (month == 3) {
                    printf("Month: March\nDays: 31\n");
                }
                else {
                    if (month == 4) {
                        printf("Month: April\nDays: 30\n");
                    }
                    else {
                        if (month == 5) {
                            printf("Month: May\nDays: 31\n");
                        }
                        else {
                            if (month == 6) {
                                printf("Month: June\nDays: 30\n");
                            }
                            else {
                                if (month == 7) {
                                    printf("Month: July\nDays: 31\n");
                                }
                                else {
                                    if (month == 8) {
                                        printf("Month: August\nDays: 31\n");
                                    }
                                    else {
                                        if (month == 9) {
                                            printf("Month: September\nDays: 30\n");
                                        }
                                        else {
                                            if (month == 10) {
                                                printf("Month: October\nDays: 31\n");
                                            }
                                            else {
                                                if (month == 11) {
                                                    printf("Month: November\nDays: 30\n");
                                                }
                                                else {
                                                    printf("Month: December\nDays: 31\n");
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

    }
    else {
        printf("Invalid month number\n");
    }

    return 0;
