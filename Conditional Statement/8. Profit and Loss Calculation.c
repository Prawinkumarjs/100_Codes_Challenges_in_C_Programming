/*
8. Profit and Loss Calculation

Write a C program to calculate profit and loss on a transaction.
Test Data :
500 700
Expected Output :
You can booked your profit amount : 200
*/



#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss, profitPercent, lossPercent;

    // Input cost price and selling price
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);

    // Calculation
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        profitPercent = (profit / costPrice) * 100;
        printf("\nYou made a PROFIT of %.2f", profit);
        printf("\nProfit Percentage: %.2f%%", profitPercent);
    }
    else if (sellingPrice < costPrice) {
        loss = costPrice - sellingPrice;
        lossPercent = (loss / costPrice) * 100;
        printf("\nYou incurred a LOSS of %.2f", loss);
        printf("\nLoss Percentage: %.2f%%", lossPercent);
    }
    else {
        printf("\nNo Profit, No Loss.");
    }

    return 0;
}
