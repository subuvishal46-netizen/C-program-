#include <stdio.h>

int main() {
    int price_pen = 20;
    int price_notebook = 70;
    int price_pencil = 9;

    int pens, notebooks, pencils;
    int total;

    printf("Enter the number of pens: ");
    scanf("%d", &pens);

    printf("Enter the number of notebooks: ");
    scanf("%d", &notebooks);

    printf("Enter the number of pencils: ");
    scanf("%d", &pencils);

    total = (pens * price_pen) + (notebooks * price_notebook) + (pencils * price_pencil);

    printf("Total amount to be paid: %d units\n", total);

    return 0;
}
