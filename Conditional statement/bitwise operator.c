#include <stdio.h>

int main() {
    int num1, num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    if ((num1 ^ num2) == 0) {
        printf("Both numbers are equal\n");
    }
    else {
        printf("Both numbers are not equal\n");
    }

    return 0;
}
