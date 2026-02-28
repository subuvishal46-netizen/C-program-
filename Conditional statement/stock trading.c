#include <stdio.h>

int main() {
    float investment, purchasePrice, currentPrice;
    float numberOfShares, currentValue, profitOrLoss;

    printf("Enter the initial investment amount: ");
    if (scanf("%f", &investment) != 1 || investment <= 0) {
        printf("Invalid investment amount!\n");
        return 1;
    }

    printf("Enter the stock purchase price per share: ");
    if (scanf("%f", &purchasePrice) != 1 || purchasePrice <= 0) {
        printf("Invalid purchase price!\n");
        return 1;
    }

    printf("Enter the current stock price per share: ");
    if (scanf("%f", &currentPrice) != 1 || currentPrice < 0) {
        printf("Invalid current price!\n");
        return 1;
    }

    numberOfShares = investment / purchasePrice;
    currentValue = numberOfShares * currentPrice;
    profitOrLoss = currentValue - investment;

    printf("\nNumber of shares purchased: %.2f\n", numberOfShares);
    printf("Current value of investment: %.2f\n", currentValue);

    if (profitOrLoss > 0) {
        printf("Profit: %.2f\n", profitOrLoss);
    } 
    else if (profitOrLoss < 0) {
        printf("Loss: %.2f\n", -profitOrLoss);
    } 
    else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
