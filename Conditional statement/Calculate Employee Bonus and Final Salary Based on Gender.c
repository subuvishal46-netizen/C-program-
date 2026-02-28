#include <stdio.h>

int main() {
    float salary, bonus = 0, finalSalary;
    char gender;

    printf("Enter employee salary: ");
    if (scanf("%f", &salary) != 1 || salary < 0) {
        printf("Invalid salary input!\n");
        return 1;
    }

    printf("Enter employee gender (M/F): ");
    scanf(" %c", &gender);

    if (gender == 'M' || gender == 'm') {
        bonus = 0.05 * salary;   // 5% bonus for male employees
    }
    else if (gender == 'F' || gender == 'f') {
        bonus = 0.10 * salary;   // 10% bonus for female employees
    }
    else {
        printf("Invalid gender entered!\n");
        return 1;
    }

    finalSalary = salary + bonus;

    printf("\nBonus Amount: %.2f\n", bonus);
    printf("Final Salary to be received: %.2f\n", finalSalary);

    return 0;
}
