#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    scanf("%d", &choice);
    scanf("%f", &num1);
    scanf("%f", &num2);

    if (choice == 1) {
        result = num1 + num2;
        printf("Result = %.2f\n", result);
    }
    else {
        if (choice == 2) {
            result = num1 - num2;
            printf("Result = %.2f\n", result);
        }
        else {
            if (choice == 3) {
                result = num1 * num2;
                printf("Result = %.2f\n", result);
            }
            else {
                if (choice == 4) {
                    if (num2 != 0) {
                        result = num1 / num2;
                        printf("Result = %.2f\n", result);
                    }
                    else {
                        printf("Division by zero not allowed\n");
                    }
                }
                else {
                    printf("Invalid choice\n");
                }
            }
        }
    }

    return 0;
}
