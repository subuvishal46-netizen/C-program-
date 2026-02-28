#include <stdio.h>

int main() {
    int age;
    int check;

    check = scanf("%d", &age);

    // Check for non-numeric input
    if (check != 1) {
        printf("Invalid input. Please enter a numeric age.\n");
    }
    else {
        // Check for negative age
        if (age < 0) {
            printf("Invalid age. Age cannot be negative.\n");
        }
        else {
            if (age <= 5) {
                printf("Recommended Food: Mashed vegetables or soft fruits\n");
            }
            else {
                if (age >= 6 && age <= 12) {
                    printf("Recommended Food: Milk, eggs, and rice\n");
                }
                else {
                    if (age >= 13 && age <= 18) {
                        printf("Recommended Food: Burgers or pasta\n");
                    }
                    else {
                        if (age >= 19 && age <= 50) {
                            printf("Recommended Food: Rice, vegetables, and lean meat\n");
                        }
                        else {
                            printf("Recommended Food: Soup or grilled fish\n");
                        }
                    }
                }
            }
        }
    }

    return 0;
}
