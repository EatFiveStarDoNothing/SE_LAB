/* Write a Program in c on any one sorting technique (Bubble, insertion, selection) */

#include <stdio.h>

#define SIZE 5

// Bubble Sort Function
void bubbleSort(float prices[], int n) {
    int i, j;
    float temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (prices[j] > prices[j + 1]) {
                temp = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = temp;
            }
        }
    }
}

// Display Function
void display(float prices[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%.2f ", prices[i]);
    }
    printf("\n");
}

int main() {
    float prices[SIZE] = {199.99, 49.50, 89.90, 299.00, 150.00};
    int choice;

    printf("Original Prices: ");
    display(prices, SIZE);

    printf("\nChoose sorting method:\n");
    printf("1. Bubble Sort\n");
    printf("Enter your choice (1): ");
    scanf("%d", &choice);

    if (choice == 1) {
        bubbleSort(prices, SIZE);
        printf("\nPrices after Bubble Sort: ");
        display(prices, SIZE);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
